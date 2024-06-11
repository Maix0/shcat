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
	v->a[20800] = anon_sym_AMP;
	v->a[20801] = anon_sym_DQUOTE;
	v->a[20802] = sym_raw_string;
	v->a[20803] = sym_number;
	v->a[20804] = anon_sym_DOLLAR_LBRACE;
	v->a[20805] = anon_sym_DOLLAR_LPAREN;
	v->a[20806] = anon_sym_BQUOTE;
	v->a[20807] = sym_word;
	v->a[20808] = anon_sym_SEMI;
	v->a[20809] = 16;
	v->a[20810] = actions(3);
	v->a[20811] = 1;
	v->a[20812] = sym_comment;
	v->a[20813] = actions(17);
	v->a[20814] = 1;
	v->a[20815] = anon_sym_LPAREN;
	v->a[20816] = actions(477);
	v->a[20817] = 1;
	v->a[20818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20819] = actions(479);
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = 1;
	v->a[20821] = anon_sym_DOLLAR;
	v->a[20822] = actions(481);
	v->a[20823] = 1;
	v->a[20824] = anon_sym_DQUOTE;
	v->a[20825] = actions(483);
	v->a[20826] = 1;
	v->a[20827] = anon_sym_DOLLAR_LBRACE;
	v->a[20828] = actions(485);
	v->a[20829] = 1;
	v->a[20830] = anon_sym_DOLLAR_LPAREN;
	v->a[20831] = actions(487);
	v->a[20832] = 1;
	v->a[20833] = anon_sym_BQUOTE;
	v->a[20834] = actions(489);
	v->a[20835] = 1;
	v->a[20836] = sym__bare_dollar;
	v->a[20837] = state(201);
	v->a[20838] = 1;
	v->a[20839] = aux_sym_command_repeat2;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = state(809);
	v->a[20841] = 1;
	v->a[20842] = sym_concatenation;
	v->a[20843] = state(1436);
	v->a[20844] = 1;
	v->a[20845] = sym_subshell;
	v->a[20846] = actions(471);
	v->a[20847] = 2;
	v->a[20848] = sym_file_descriptor;
	v->a[20849] = ts_builtin_sym_end;
	v->a[20850] = actions(475);
	v->a[20851] = 3;
	v->a[20852] = sym_raw_string;
	v->a[20853] = sym_number;
	v->a[20854] = sym_word;
	v->a[20855] = state(339);
	v->a[20856] = 5;
	v->a[20857] = sym_arithmetic_expansion;
	v->a[20858] = sym_string;
	v->a[20859] = sym_simple_expansion;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = sym_expansion;
	v->a[20861] = sym_command_substitution;
	v->a[20862] = actions(457);
	v->a[20863] = 19;
	v->a[20864] = anon_sym_PIPE;
	v->a[20865] = anon_sym_SEMI_SEMI;
	v->a[20866] = anon_sym_AMP_AMP;
	v->a[20867] = anon_sym_PIPE_PIPE;
	v->a[20868] = anon_sym_LT;
	v->a[20869] = anon_sym_GT;
	v->a[20870] = anon_sym_GT_GT;
	v->a[20871] = anon_sym_AMP_GT;
	v->a[20872] = anon_sym_AMP_GT_GT;
	v->a[20873] = anon_sym_LT_AMP;
	v->a[20874] = anon_sym_GT_AMP;
	v->a[20875] = anon_sym_GT_PIPE;
	v->a[20876] = anon_sym_LT_AMP_DASH;
	v->a[20877] = anon_sym_GT_AMP_DASH;
	v->a[20878] = anon_sym_LT_LT;
	v->a[20879] = anon_sym_LT_LT_DASH;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = aux_sym_heredoc_redirect_token1;
	v->a[20881] = anon_sym_AMP;
	v->a[20882] = anon_sym_SEMI;
	v->a[20883] = 16;
	v->a[20884] = actions(3);
	v->a[20885] = 1;
	v->a[20886] = sym_comment;
	v->a[20887] = actions(99);
	v->a[20888] = 1;
	v->a[20889] = anon_sym_LPAREN;
	v->a[20890] = actions(459);
	v->a[20891] = 1;
	v->a[20892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20893] = actions(461);
	v->a[20894] = 1;
	v->a[20895] = anon_sym_DOLLAR;
	v->a[20896] = actions(463);
	v->a[20897] = 1;
	v->a[20898] = anon_sym_DQUOTE;
	v->a[20899] = actions(465);
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */
