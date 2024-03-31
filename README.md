# DJGPP v2.03

## !!!DISCLAIMER!!!
This is not meant to be compiled from source. It is simply a collection of the .zip
files you would download and extract into one `DJGPP` folder from djgpp file-picker
as if it were the year 2009.

### Bundled files:  
All .zip files are sourced from [delore.com](https://www.delorie.com/pub/djgpp/)
download index with the exception of `make380b` which I couldn't locate. It is
sourced from [mrdictionary.net](https://www.mrdictonary.net). Therefore I would
like to give a big thanks to [DJ Delore](https://www.delorie.com/users/dj/), 
and Mathew Carr a.k.a mrdictionary.

[bnu219b.zip](https://www.delorie.com/pub/djgpp/deleted/v2gnu/bnu219b.zip)  
[csdpmi5b](https://www.delorie.com/pub/djgpp/current/v2misc/csdpmi5b.zip)  
[djdev203](https://www.delorie.com/pub/djgpp/deleted/v2/djdev203.zip)  
[gcc441b](https://www.delorie.com/pub/djgpp/deleted/v2gnu/gcc441b.zip)  
[gpp441b](https://www.delorie.com/pub/djgpp/deleted/v2gnu/gpp441b.zip)  
[mak380b](https://www.mrdictionary.net/allegro/mak380b.zip)  
[rhid15ab](https://www.delorie.com/pub/djgpp/current/v2apps/rhid15ab.zip)  
[txi40b](https://www.delorie.com/pub/djgpp/deleted/v2gnu/txi40b.zip)  

### Usage

- Download [latest release](https://github.com/leegibsonhoward/djgpp/releases/tag/v2.03-r1).
- Extract the zip, rename folder to `DJGPP` then move folder to `C:\DJGPP`
- Setup enviroment:  
    - Windows 9x: add to `c:\autoexec.bat`.  
    - Dosbox:  add to `[autoexec]` section of dosbox config  
```
set path=%path%;c:\djgpp\bin
set djgpp=c:\djgpp\djgpp.env
```
