Initial Release. Utility library to help mods create recipes with extra info or special properties.




# Advanced Recipes

**Multiplayer Compatible!** _Can also run as a client-side only mod as long as the server has SML installed._

_If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4)._

This mod adds no content of its own.
It enables other mods to supply additional properties for non-standard recipes
to help explain them to the user.

## Features

- Make machine ingredients that cost '0' of an item display as "Catalyst" items instead of "0"
  - ![Catalyst image](https://i.imgur.com/W76JLf2.png)

## Mods Using This Mod

- [Beaver's Bio Tweaks](https://ficsit.app/mod/AB_BioTweaks)

## Planned Features

- Allow recipes to supply descriptions viewable to the user in the Codex and machines
- Distingush Advanced Recipes in the HUB and MAM interface
- Rename HUB and MAM recipe unlocks to display their recipe name instead of the first product item name
- Add a new tab to the Codex that allows browsing all Advanced Recipes to view their details
- Rename recipes in tooltips/codex with their recipe names, if they have one
  - [TFIT](https://ficsit.app/mod/TFIT) already does this
- Adjust recipe tooltips to say "*" of a Catalyst item instead of "0" of a Catalyst item

## For Mod Developers

This mod is open source and I (Robb) will not be vanishing on you any time soon.

Documentation coming Soon™.
For now, this mod's one feature will take effect on any recipe with a zero-count ingredient
in any machine that makes use of the vanilla production UI.

<!-- This mod currently only takes effect if your recipe class implements the IARAdvancedRecipeDataProvider interface.
This may change in the future. -->
