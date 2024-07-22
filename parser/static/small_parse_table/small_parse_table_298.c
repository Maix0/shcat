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
	v->a[29800] = anon_sym_GT_GT;
	v->a[29801] = anon_sym_LT_AMP;
	v->a[29802] = anon_sym_GT_AMP;
	v->a[29803] = anon_sym_GT_PIPE;
	v->a[29804] = anon_sym_LT_GT;
	v->a[29805] = anon_sym_LT_LT;
	v->a[29806] = anon_sym_LT_LT_DASH;
	v->a[29807] = aux_sym_heredoc_redirect_token1;
	v->a[29808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29809] = anon_sym_DOLLAR;
	v->a[29810] = anon_sym_DQUOTE;
	v->a[29811] = sym_raw_string;
	v->a[29812] = sym_number;
	v->a[29813] = anon_sym_DOLLAR_LBRACE;
	v->a[29814] = anon_sym_DOLLAR_LPAREN;
	v->a[29815] = anon_sym_BQUOTE;
	v->a[29816] = sym_word;
	v->a[29817] = anon_sym_SEMI;
	v->a[29818] = 6;
	v->a[29819] = actions(3);
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = 1;
	v->a[29821] = sym_comment;
	v->a[29822] = actions(1125);
	v->a[29823] = 1;
	v->a[29824] = aux_sym_concatenation_token1;
	v->a[29825] = actions(1127);
	v->a[29826] = 1;
	v->a[29827] = sym__concat;
	v->a[29828] = state(363);
	v->a[29829] = 1;
	v->a[29830] = aux_sym_concatenation_repeat1;
	v->a[29831] = actions(1097);
	v->a[29832] = 2;
	v->a[29833] = sym_file_descriptor;
	v->a[29834] = sym__bare_dollar;
	v->a[29835] = actions(1099);
	v->a[29836] = 26;
	v->a[29837] = anon_sym_LPAREN;
	v->a[29838] = anon_sym_PIPE;
	v->a[29839] = anon_sym_RPAREN;
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = anon_sym_SEMI_SEMI;
	v->a[29841] = anon_sym_AMP_AMP;
	v->a[29842] = anon_sym_PIPE_PIPE;
	v->a[29843] = anon_sym_LT;
	v->a[29844] = anon_sym_GT;
	v->a[29845] = anon_sym_GT_GT;
	v->a[29846] = anon_sym_LT_AMP;
	v->a[29847] = anon_sym_GT_AMP;
	v->a[29848] = anon_sym_GT_PIPE;
	v->a[29849] = anon_sym_LT_GT;
	v->a[29850] = anon_sym_LT_LT;
	v->a[29851] = anon_sym_LT_LT_DASH;
	v->a[29852] = aux_sym_heredoc_redirect_token1;
	v->a[29853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29854] = anon_sym_DOLLAR;
	v->a[29855] = anon_sym_DQUOTE;
	v->a[29856] = sym_raw_string;
	v->a[29857] = sym_number;
	v->a[29858] = anon_sym_DOLLAR_LBRACE;
	v->a[29859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = anon_sym_BQUOTE;
	v->a[29861] = sym_word;
	v->a[29862] = anon_sym_SEMI;
	v->a[29863] = 20;
	v->a[29864] = actions(3);
	v->a[29865] = 1;
	v->a[29866] = sym_comment;
	v->a[29867] = actions(17);
	v->a[29868] = 1;
	v->a[29869] = anon_sym_LPAREN;
	v->a[29870] = actions(55);
	v->a[29871] = 1;
	v->a[29872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29873] = actions(57);
	v->a[29874] = 1;
	v->a[29875] = anon_sym_DOLLAR;
	v->a[29876] = actions(59);
	v->a[29877] = 1;
	v->a[29878] = anon_sym_DQUOTE;
	v->a[29879] = actions(63);
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = 1;
	v->a[29881] = anon_sym_DOLLAR_LBRACE;
	v->a[29882] = actions(65);
	v->a[29883] = 1;
	v->a[29884] = anon_sym_DOLLAR_LPAREN;
	v->a[29885] = actions(67);
	v->a[29886] = 1;
	v->a[29887] = anon_sym_BQUOTE;
	v->a[29888] = actions(221);
	v->a[29889] = 1;
	v->a[29890] = sym_variable_name;
	v->a[29891] = actions(1095);
	v->a[29892] = 1;
	v->a[29893] = sym_file_descriptor;
	v->a[29894] = state(170);
	v->a[29895] = 1;
	v->a[29896] = sym_command_name;
	v->a[29897] = state(617);
	v->a[29898] = 1;
	v->a[29899] = aux_sym_command_repeat1;
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
