gawake_sources = [
  'main.c',
  'gawake-application.c',
  'gawake-window.c',
]

gawake_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.2'), // originally 1.4
]

gawake_sources += gnome.compile_resources('gawake-resources',
  'gawake.gresource.xml',
  c_name: 'gawake'
)

executable('gawake', gawake_sources,
  dependencies: gawake_deps,
       install: true,
)
