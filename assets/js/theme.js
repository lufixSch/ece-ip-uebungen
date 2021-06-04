const set_theme = (is_dark) => {
  if (is_dark) {
    console.log('dark');
    jtd.setTheme('lufix-dark');
  } else {
    console.log('light');
    jtd.setTheme('lufix-light');
  }
};

const is_dark = window.matchMedia('(prefers-color-scheme: dark)').matches;

set_theme(is_dark);

window
  .matchMedia('(prefers-color-scheme: dark)')
  .addEventListener('change', (args) => {
    const is_dark = args.matches;

    set_theme(is_dark);
  });
