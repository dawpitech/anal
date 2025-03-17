{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.11";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        cc = pkgs.gcc14;

        deps = with pkgs; [
          libcxx
          gnumake
          criterion
        ] ++ [ cc ];
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            unzip
            gcovr
            ltrace
            valgrind
            python311Packages.compiledb
            man-pages
            man-pages-posix
            gdb
            mold
            cmake
          ] ++ deps;
        };

        formatter = pkgs.nixpkgs-fmt;
      });
}
