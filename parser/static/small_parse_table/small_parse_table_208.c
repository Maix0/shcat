/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_208.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1040(t_small_parse_table_array *v)
{
	v->a[20800] = sym_file_descriptor;
	v->a[20801] = actions(497);
	v->a[20802] = 1;
	v->a[20803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20804] = actions(499);
	v->a[20805] = 1;
	v->a[20806] = anon_sym_DOLLAR;
	v->a[20807] = actions(501);
	v->a[20808] = 1;
	v->a[20809] = anon_sym_DQUOTE;
	v->a[20810] = actions(503);
	v->a[20811] = 1;
	v->a[20812] = anon_sym_DOLLAR_LBRACE;
	v->a[20813] = actions(505);
	v->a[20814] = 1;
	v->a[20815] = anon_sym_DOLLAR_LPAREN;
	v->a[20816] = actions(507);
	v->a[20817] = 1;
	v->a[20818] = anon_sym_BQUOTE;
	v->a[20819] = actions(509);
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = 1;
	v->a[20821] = sym__bare_dollar;
	v->a[20822] = state(205);
	v->a[20823] = 1;
	v->a[20824] = aux_sym_command_repeat2;
	v->a[20825] = state(725);
	v->a[20826] = 1;
	v->a[20827] = sym_concatenation;
	v->a[20828] = state(1387);
	v->a[20829] = 1;
	v->a[20830] = sym_subshell;
	v->a[20831] = actions(495);
	v->a[20832] = 3;
	v->a[20833] = sym_raw_string;
	v->a[20834] = sym_number;
	v->a[20835] = sym_word;
	v->a[20836] = state(438);
	v->a[20837] = 5;
	v->a[20838] = sym_arithmetic_expansion;
	v->a[20839] = sym_string;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = sym_simple_expansion;
	v->a[20841] = sym_expansion;
	v->a[20842] = sym_command_substitution;
	v->a[20843] = actions(457);
	v->a[20844] = 18;
	v->a[20845] = anon_sym_esac;
	v->a[20846] = anon_sym_PIPE;
	v->a[20847] = anon_sym_SEMI_SEMI;
	v->a[20848] = anon_sym_AMP_AMP;
	v->a[20849] = anon_sym_PIPE_PIPE;
	v->a[20850] = anon_sym_LT;
	v->a[20851] = anon_sym_GT;
	v->a[20852] = anon_sym_GT_GT;
	v->a[20853] = anon_sym_LT_AMP;
	v->a[20854] = anon_sym_GT_AMP;
	v->a[20855] = anon_sym_GT_PIPE;
	v->a[20856] = anon_sym_LT_AMP_DASH;
	v->a[20857] = anon_sym_GT_AMP_DASH;
	v->a[20858] = anon_sym_LT_LT;
	v->a[20859] = anon_sym_LT_LT_DASH;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = aux_sym_heredoc_redirect_token1;
	v->a[20861] = anon_sym_AMP;
	v->a[20862] = anon_sym_SEMI;
	v->a[20863] = 16;
	v->a[20864] = actions(3);
	v->a[20865] = 1;
	v->a[20866] = sym_comment;
	v->a[20867] = actions(17);
	v->a[20868] = 1;
	v->a[20869] = anon_sym_LPAREN;
	v->a[20870] = actions(459);
	v->a[20871] = 1;
	v->a[20872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20873] = actions(461);
	v->a[20874] = 1;
	v->a[20875] = anon_sym_DOLLAR;
	v->a[20876] = actions(463);
	v->a[20877] = 1;
	v->a[20878] = anon_sym_DQUOTE;
	v->a[20879] = actions(465);
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = 1;
	v->a[20881] = anon_sym_DOLLAR_LBRACE;
	v->a[20882] = actions(467);
	v->a[20883] = 1;
	v->a[20884] = anon_sym_DOLLAR_LPAREN;
	v->a[20885] = actions(469);
	v->a[20886] = 1;
	v->a[20887] = anon_sym_BQUOTE;
	v->a[20888] = actions(473);
	v->a[20889] = 1;
	v->a[20890] = sym__bare_dollar;
	v->a[20891] = actions(493);
	v->a[20892] = 1;
	v->a[20893] = sym_file_descriptor;
	v->a[20894] = state(230);
	v->a[20895] = 1;
	v->a[20896] = aux_sym_command_repeat2;
	v->a[20897] = state(718);
	v->a[20898] = 1;
	v->a[20899] = sym_concatenation;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */
