/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xdata.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:20:57 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/21 20:15:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef XDATA_H
# define XDATA_H

# define KEYPRESS 2
# define KEYRELEASE 3
# define BUTTONPRESS 4
# define BUTTONRELEASE 5
# define MOTIONNOTIFY 6
# define ENTERNOTIFY 7
# define LEAVENOTIFY 8
# define FOCUSIN 9
# define FOCUSOUT 10
# define KEYMAPNOTIFY 11
# define EXPOSE 12
# define GRAPHICSEXPOSE 13
# define NOEXPOSE 14
# define VISIBILITYNOTIFY 15
# define CREATENOTIFY 16
# define DESTROYNOTIFY 17
# define UNMAPNOTIFY 18
# define MAPNOTIFY 19
# define MAPREQUEST 20
# define REPARENTNOTIFY 21
# define CONFIGURENOTIFY 22
# define CONFIGUREREQUEST 23
# define GRAVITYNOTIFY 24
# define RESIZEREQUEST 25
# define CIRCULATENOTIFY 26
# define CIRCULATEREQUEST 27
# define PROPERTYNOTIFY 28
# define SELECTIONCLEAR 29
# define SELECTIONREQUEST 30
# define SELECTIONNOTIFY 31
# define COLORMAPNOTIFY 32
# define CLIENTMESSAGE 33
# define MAPPINGNOTIFY 34
# define GENERICEVENT 35

# define NOEVENTMASK 0b0L
# define KEYPRESSMASK 0b1L
# define KEYRELEASEMASK 0b10L
# define BUTTONPRESSMASK 0b100L
# define BUTTONRELEASEMASK 0b1000L
# define ENTERWINDOWMASK 0b10000L
# define LEAVEWINDOWMASK 0b100000L
# define POINTERMOTIONMASK 0b1000000L
# define POINTERMOTIONHINTMASK 0b10000000L
# define BUTTON1MOTIONMASK 0b100000000L
# define BUTTON2MOTIONMASK 0b1000000000L
# define BUTTON3MOTIONMASK 0b10000000000L
# define BUTTON4MOTIONMASK 0b100000000000L
# define BUTTON5MOTIONMASK 0b1000000000000L
# define BUTTONMOTIONMASK 0b10000000000000L
# define KEYMAPSTATEMASK 0b100000000000000L
# define EXPOSUREMASK 0b1000000000000000L
# define VISIBILITYCHANGEMASK 0b10000000000000000L
# define STRUCTURENOTIFYMASK 0b100000000000000000L
# define RESIZEREDIRECTMASK 0b1000000000000000000L
# define SUBSTRUCTURENOTIFYMASK 0b10000000000000000000L
# define SUBSTRUCTUREREDIRECTMASK 0b100000000000000000000L
# define FOCUSCHANGEMASK 0b1000000000000000000000L
# define PROPERTYCHANGEMASK 0b10000000000000000000000L
# define COLORMAPCHANGEMASK 0b100000000000000000000000L
# define OWNERGRABBUTTONMASK 0b1000000000000000000000000L

#endif
