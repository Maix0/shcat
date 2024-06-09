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
	v->a[29803] = anon_sym_LT_AMP_DASH;
	v->a[29804] = anon_sym_GT_AMP_DASH;
	v->a[29805] = anon_sym_LT_LT;
	v->a[29806] = anon_sym_LT_LT_DASH;
	v->a[29807] = aux_sym_heredoc_redirect_token1;
	v->a[29808] = 10;
	v->a[29809] = actions(3);
	v->a[29810] = 1;
	v->a[29811] = sym_comment;
	v->a[29812] = actions(1002);
	v->a[29813] = 1;
	v->a[29814] = anon_sym_PIPE;
	v->a[29815] = actions(1006);
	v->a[29816] = 1;
	v->a[29817] = sym_file_descriptor;
	v->a[29818] = actions(1095);
	v->a[29819] = 1;
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = sym_variable_name;
	v->a[29821] = actions(1062);
	v->a[29822] = 2;
	v->a[29823] = anon_sym_LT_LT;
	v->a[29824] = anon_sym_LT_LT_DASH;
	v->a[29825] = actions(1093);
	v->a[29826] = 2;
	v->a[29827] = anon_sym_AMP_AMP;
	v->a[29828] = anon_sym_PIPE_PIPE;
	v->a[29829] = state(1151);
	v->a[29830] = 2;
	v->a[29831] = sym_variable_assignment;
	v->a[29832] = aux_sym_variable_assignments_repeat1;
	v->a[29833] = state(1160);
	v->a[29834] = 3;
	v->a[29835] = sym_file_redirect;
	v->a[29836] = sym_heredoc_redirect;
	v->a[29837] = aux_sym_redirected_statement_repeat1;
	v->a[29838] = actions(1176);
	v->a[29839] = 4;
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = anon_sym_SEMI_SEMI;
	v->a[29841] = aux_sym_heredoc_redirect_token1;
	v->a[29842] = anon_sym_AMP;
	v->a[29843] = anon_sym_SEMI;
	v->a[29844] = actions(1000);
	v->a[29845] = 20;
	v->a[29846] = anon_sym_LT;
	v->a[29847] = anon_sym_GT;
	v->a[29848] = anon_sym_GT_GT;
	v->a[29849] = anon_sym_AMP_GT;
	v->a[29850] = anon_sym_AMP_GT_GT;
	v->a[29851] = anon_sym_LT_AMP;
	v->a[29852] = anon_sym_GT_AMP;
	v->a[29853] = anon_sym_GT_PIPE;
	v->a[29854] = anon_sym_LT_AMP_DASH;
	v->a[29855] = anon_sym_GT_AMP_DASH;
	v->a[29856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29857] = anon_sym_DOLLAR;
	v->a[29858] = anon_sym_DQUOTE;
	v->a[29859] = sym_raw_string;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = aux_sym_number_token1;
	v->a[29861] = aux_sym_number_token2;
	v->a[29862] = anon_sym_DOLLAR_LBRACE;
	v->a[29863] = anon_sym_DOLLAR_LPAREN;
	v->a[29864] = anon_sym_BQUOTE;
	v->a[29865] = sym_word;
	v->a[29866] = 5;
	v->a[29867] = actions(3);
	v->a[29868] = 1;
	v->a[29869] = sym_comment;
	v->a[29870] = actions(565);
	v->a[29871] = 2;
	v->a[29872] = sym_file_descriptor;
	v->a[29873] = sym_variable_name;
	v->a[29874] = state(317);
	v->a[29875] = 2;
	v->a[29876] = sym_concatenation;
	v->a[29877] = aux_sym_for_statement_repeat1;
	v->a[29878] = state(771);
	v->a[29879] = 6;
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = sym_arithmetic_expansion;
	v->a[29881] = sym_string;
	v->a[29882] = sym_number;
	v->a[29883] = sym_simple_expansion;
	v->a[29884] = sym_expansion;
	v->a[29885] = sym_command_substitution;
	v->a[29886] = actions(567);
	v->a[29887] = 26;
	v->a[29888] = anon_sym_PIPE;
	v->a[29889] = anon_sym_AMP_AMP;
	v->a[29890] = anon_sym_PIPE_PIPE;
	v->a[29891] = anon_sym_LT;
	v->a[29892] = anon_sym_GT;
	v->a[29893] = anon_sym_GT_GT;
	v->a[29894] = anon_sym_AMP_GT;
	v->a[29895] = anon_sym_AMP_GT_GT;
	v->a[29896] = anon_sym_LT_AMP;
	v->a[29897] = anon_sym_GT_AMP;
	v->a[29898] = anon_sym_GT_PIPE;
	v->a[29899] = anon_sym_LT_AMP_DASH;
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
