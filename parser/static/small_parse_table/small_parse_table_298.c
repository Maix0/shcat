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
	v->a[29800] = sym__heredoc_pipeline;
	v->a[29801] = actions(1061);
	v->a[29802] = 2;
	v->a[29803] = anon_sym_AMP_AMP;
	v->a[29804] = anon_sym_PIPE_PIPE;
	v->a[29805] = state(1521);
	v->a[29806] = 2;
	v->a[29807] = sym_file_redirect;
	v->a[29808] = aux_sym_redirected_statement_repeat2;
	v->a[29809] = actions(1057);
	v->a[29810] = 3;
	v->a[29811] = sym_raw_string;
	v->a[29812] = sym_number;
	v->a[29813] = sym_word;
	v->a[29814] = state(1589);
	v->a[29815] = 5;
	v->a[29816] = sym_arithmetic_expansion;
	v->a[29817] = sym_string;
	v->a[29818] = sym_simple_expansion;
	v->a[29819] = sym_expansion;
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = sym_command_substitution;
	v->a[29821] = actions(1063);
	v->a[29822] = 7;
	v->a[29823] = anon_sym_LT;
	v->a[29824] = anon_sym_GT;
	v->a[29825] = anon_sym_GT_GT;
	v->a[29826] = anon_sym_LT_AMP;
	v->a[29827] = anon_sym_GT_AMP;
	v->a[29828] = anon_sym_GT_PIPE;
	v->a[29829] = anon_sym_LT_GT;
	v->a[29830] = 19;
	v->a[29831] = actions(3);
	v->a[29832] = 1;
	v->a[29833] = sym_comment;
	v->a[29834] = actions(1059);
	v->a[29835] = 1;
	v->a[29836] = anon_sym_PIPE;
	v->a[29837] = actions(1067);
	v->a[29838] = 1;
	v->a[29839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = actions(1069);
	v->a[29841] = 1;
	v->a[29842] = anon_sym_DOLLAR;
	v->a[29843] = actions(1071);
	v->a[29844] = 1;
	v->a[29845] = anon_sym_DQUOTE;
	v->a[29846] = actions(1073);
	v->a[29847] = 1;
	v->a[29848] = anon_sym_DOLLAR_LBRACE;
	v->a[29849] = actions(1075);
	v->a[29850] = 1;
	v->a[29851] = anon_sym_DOLLAR_LPAREN;
	v->a[29852] = actions(1077);
	v->a[29853] = 1;
	v->a[29854] = anon_sym_BQUOTE;
	v->a[29855] = actions(1079);
	v->a[29856] = 1;
	v->a[29857] = sym_file_descriptor;
	v->a[29858] = actions(1140);
	v->a[29859] = 1;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = aux_sym_heredoc_redirect_token1;
	v->a[29861] = state(1338);
	v->a[29862] = 1;
	v->a[29863] = aux_sym__heredoc_command;
	v->a[29864] = state(1725);
	v->a[29865] = 1;
	v->a[29866] = sym_concatenation;
	v->a[29867] = state(2047);
	v->a[29868] = 1;
	v->a[29869] = sym__heredoc_expression;
	v->a[29870] = state(2082);
	v->a[29871] = 1;
	v->a[29872] = sym__heredoc_pipeline;
	v->a[29873] = actions(1061);
	v->a[29874] = 2;
	v->a[29875] = anon_sym_AMP_AMP;
	v->a[29876] = anon_sym_PIPE_PIPE;
	v->a[29877] = state(1504);
	v->a[29878] = 2;
	v->a[29879] = sym_file_redirect;
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = aux_sym_redirected_statement_repeat2;
	v->a[29881] = actions(1057);
	v->a[29882] = 3;
	v->a[29883] = sym_raw_string;
	v->a[29884] = sym_number;
	v->a[29885] = sym_word;
	v->a[29886] = state(1589);
	v->a[29887] = 5;
	v->a[29888] = sym_arithmetic_expansion;
	v->a[29889] = sym_string;
	v->a[29890] = sym_simple_expansion;
	v->a[29891] = sym_expansion;
	v->a[29892] = sym_command_substitution;
	v->a[29893] = actions(1063);
	v->a[29894] = 7;
	v->a[29895] = anon_sym_LT;
	v->a[29896] = anon_sym_GT;
	v->a[29897] = anon_sym_GT_GT;
	v->a[29898] = anon_sym_LT_AMP;
	v->a[29899] = anon_sym_GT_AMP;
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
