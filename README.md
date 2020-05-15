This repository covers various techniques and methods for leaking various Windows kernel addresses on Windows 10 1607, 1703, and 1809. This repository provides the tools and code as proof of concepts for leaking these kernel addresses. Linked below is a blog post that explains every detail and aspect of how this works. Leaking Windows kernel addresses from a unprivileged user mode standpoint can be used to bypass and circumvent the KASLR security mitigation that's in place for Microsoft.

These windows kernel address leaks may also be combined with an arbitrary write or read primitive in order to obtain any exploitation means that an attacker has in mind.

Blog post that goes along with this - https://fullpwnops.com/Windows-10-kaslr-infoleak/

### Windows 10 1607 - (Anniversary Update)

- **DesktopHeap (TEB.Win32ClientInfo) kernel information leakage**

The following information leakage proof-of-concept works on various Windows versions, from Windows 7 till Windows 10 1603, where it has now been mitigated in 2016 via the 1703 update.

![winVer](https://raw.githubusercontent.com/FULLSHADE/LEAKYDRIPPER/master/images/winVersions.png)

This Windows kernel address leakage proof-of-concept demonstrates how the user-mode mapped DesktopHeap on Windows 1607 x64 bit can be used to leak various kernel addresses via undocumented kernel data structures and undocumented members.

![desktop heap leakage](https://github.com/FULLSHADE/LEAKYDRIPPER/blob/master/images/DesktopHeapLeak.png)

### Resources

- [1] [https://www.youtube.com/watch?v=Gu_5kkErQ6Y](https://www.youtube.com/watch?v=Gu_5kkErQ6Y)
- [2] [https://media.blackhat.com/bh-us-11/Mandt/BH_US_11_Mandt_win32k_WP.pdf](https://media.blackhat.com/bh-us-11/Mandt/BH_US_11_Mandt_win32k_WP.pdf)
- [3] [https://reactos.org/wiki/Techwiki:Win32k](https://reactos.org/wiki/Techwiki:Win32k)
- [4] [https://fullpwnops.com/Windows-10-kaslr-infoleak/](https://fullpwnops.com/Windows-10-kaslr-infoleak/)

----

### Windows 10 1703 - (Creators Update)

With the Windows 10 1703 update in 2016, `ulClientDelta` from `Win32ClientInfo` has been removed, successfully mitigating the previously demonstrated information leak. 


