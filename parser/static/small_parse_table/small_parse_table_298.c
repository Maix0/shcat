/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_298.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1490(t_small_parse_table_array *v)
{
	v->a[29800] = anon_sym_LT_AMP;
	v->a[29801] = anon_sym_GT_AMP;
	v->a[29802] = anon_sym_GT_PIPE;
	v->a[29803] = anon_sym_LT_GT;
	v->a[29804] = anon_sym_LT_LT;
	v->a[29805] = anon_sym_LT_LT_DASH;
	v->a[29806] = aux_sym_heredoc_redirect_token1;
	v->a[29807] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29808] = anon_sym_AMP;
	v->a[29809] = anon_sym_DOLLAR;
	v->a[29810] = anon_sym_DQUOTE;
	v->a[29811] = sym_raw_string;
	v->a[29812] = sym_number;
	v->a[29813] = anon_sym_DOLLAR_LBRACE;
	v->a[29814] = anon_sym_DOLLAR_LPAREN;
	v->a[29815] = anon_sym_BQUOTE;
	v->a[29816] = sym_word;
	v->a[29817] = anon_sym_SEMI;
	v->a[29818] = 16;
	v->a[29819] = actions(3);
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = 1;
	v->a[29821] = sym_comment;
	v->a[29822] = actions(321);
	v->a[29823] = 1;
	v->a[29824] = anon_sym_LPAREN;
	v->a[29825] = actions(437);
	v->a[29826] = 1;
	v->a[29827] = sym_file_descriptor;
	v->a[29828] = actions(1130);
	v->a[29829] = 1;
	v->a[29830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29831] = actions(1132);
	v->a[29832] = 1;
	v->a[29833] = anon_sym_DOLLAR;
	v->a[29834] = actions(1134);
	v->a[29835] = 1;
	v->a[29836] = anon_sym_DQUOTE;
	v->a[29837] = actions(1136);
	v->a[29838] = 1;
	v->a[29839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = actions(1138);
	v->a[29841] = 1;
	v->a[29842] = anon_sym_DOLLAR_LPAREN;
	v->a[29843] = actions(1140);
	v->a[29844] = 1;
	v->a[29845] = anon_sym_BQUOTE;
	v->a[29846] = actions(1142);
	v->a[29847] = 1;
	v->a[29848] = sym__bare_dollar;
	v->a[29849] = state(455);
	v->a[29850] = 1;
	v->a[29851] = aux_sym_command_repeat2;
	v->a[29852] = state(912);
	v->a[29853] = 1;
	v->a[29854] = sym_concatenation;
	v->a[29855] = state(1599);
	v->a[29856] = 1;
	v->a[29857] = sym_subshell;
	v->a[29858] = actions(1128);
	v->a[29859] = 3;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = sym_raw_string;
	v->a[29861] = sym_number;
	v->a[29862] = sym_word;
	v->a[29863] = state(779);
	v->a[29864] = 5;
	v->a[29865] = sym_arithmetic_expansion;
	v->a[29866] = sym_string;
	v->a[29867] = sym_simple_expansion;
	v->a[29868] = sym_expansion;
	v->a[29869] = sym_command_substitution;
	v->a[29870] = actions(441);
	v->a[29871] = 12;
	v->a[29872] = anon_sym_PIPE;
	v->a[29873] = anon_sym_AMP_AMP;
	v->a[29874] = anon_sym_PIPE_PIPE;
	v->a[29875] = anon_sym_LT;
	v->a[29876] = anon_sym_GT;
	v->a[29877] = anon_sym_GT_GT;
	v->a[29878] = anon_sym_LT_AMP;
	v->a[29879] = anon_sym_GT_AMP;
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = anon_sym_GT_PIPE;
	v->a[29881] = anon_sym_LT_GT;
	v->a[29882] = anon_sym_LT_LT;
	v->a[29883] = anon_sym_LT_LT_DASH;
	v->a[29884] = 6;
	v->a[29885] = actions(3);
	v->a[29886] = 1;
	v->a[29887] = sym_comment;
	v->a[29888] = actions(1051);
	v->a[29889] = 1;
	v->a[29890] = aux_sym_concatenation_token1;
	v->a[29891] = actions(1062);
	v->a[29892] = 1;
	v->a[29893] = sym__concat;
	v->a[29894] = state(345);
	v->a[29895] = 1;
	v->a[29896] = aux_sym_concatenation_repeat1;
	v->a[29897] = actions(1055);
	v->a[29898] = 3;
	v->a[29899] = sym_file_descriptor;
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
