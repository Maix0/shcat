{
  description = "Flake utils demo";

  inputs.flake-utils.url = "github:numtide/flake-utils";
  inputs.generic_c.url = "github:Maix0/generic_c";

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    generic_c,
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShell = pkgs.mkShell {
          packages = with pkgs; [clang valgrind gnumake readline.out readline.dev generic_c.packages.${system}.default llvmPackages.bintools];
        };
      }
    );
}
