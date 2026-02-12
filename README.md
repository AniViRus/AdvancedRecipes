# Advanced Recipes

**Multiplayer Compatible, Multiplayer Tested!** *Can also run as a client-side only mod as long as the server has SML installed.*

*If you enjoy my work, please consider donating to my* [*completely optional tip jar*](https://ko-fi.com/robb4)*.*

This mod adds no content of its own, only adjusts various displays of recipes. It also enables other mods to supply additional properties for recipes

## Features

* Make ingredients that cost '0' of an item display as "Catalyst" items instead of "0"

  * The same applies to recipe displays in Codex, tooltips and anywhere else!
  * !\[Catalyst image](https://i.imgur.com/W76JLf2.png)

* Make machine products that cost '0' of an item display as "Dispersed" items instead of "0"
* Make milestones/researches display name of the recipe instead of its first product
* Allows modders to supply recipes with extra data (recipe descriptions, custom recipe icons) viewable to the user in the Codex, unlocks, machines and other recipe info displays

## Mods Using This Mod

* [Beaver's Bio Tweaks](https://ficsit.app/mod/AB_BioTweaks)

## For Mod Developers

This mod is open source and I (Robb) will not be vanishing on you any time soon.

This mod's features take effect on any vanilla-based UI.

Sometimes no item recipe has a name matching its first product name *(i.e. Ficsite Ingot (Iron), Power Shard (1)...)*. To make the mod ignore a certain recipe unlock, apply ***Recipe.Original*** content tag to it via Content Tag Addition Table

In order to provide advanced description for a recipe, create a Data Asset of type **BP\_AdvancedRecipeDescription** and set all of its values. ***None*** textures and empty description texts will make it to not alter original description parts, except for ***DisplayByproduct***, it is always applied. The rest is handled by Advanced Recipes itself

*NOTE: If you want this mod to be an optional dependency, only set data on Data Asset instances, or do after a mod presence check!*

Update 2.0.0-2.1.0 provided by AniViRus Productions

