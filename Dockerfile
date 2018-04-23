FROM yastdevel/ruby:sle15
RUN zypper --gpg-auto-import-keys --non-interactive in --no-recommends \
  xorg-x11-libX11-devel

COPY . /usr/src/app

