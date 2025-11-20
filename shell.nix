{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  # other packages
  packages = with pkgs; [texliveFull python3];
  # tools
  nativeBuildInputs = with pkgs; [];
  # libs
  buildInputs = with pkgs; [];
  
  shellHook = ''echo 'shell ok'
  '';
}


