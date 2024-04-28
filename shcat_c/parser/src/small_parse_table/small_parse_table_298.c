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
	v->a[29800] = actions(3269);
	v->a[29801] = 1;
	v->a[29802] = sym__brace_start;
	v->a[29803] = actions(4474);
	v->a[29804] = 1;
	v->a[29805] = sym__special_character;
	v->a[29806] = actions(4477);
	v->a[29807] = 1;
	v->a[29808] = sym_test_operator;
	v->a[29809] = state(2161);
	v->a[29810] = 1;
	v->a[29811] = aux_sym__literal_repeat1;
	v->a[29812] = actions(2216);
	v->a[29813] = 2;
	v->a[29814] = sym_file_descriptor;
	v->a[29815] = aux_sym_heredoc_redirect_token1;
	v->a[29816] = actions(3230);
	v->a[29817] = 2;
	v->a[29818] = anon_sym_LPAREN_LPAREN;
	v->a[29819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = actions(3263);
	v->a[29821] = 2;
	v->a[29822] = anon_sym_LT_LPAREN;
	v->a[29823] = anon_sym_GT_LPAREN;
	v->a[29824] = state(860);
	v->a[29825] = 2;
	v->a[29826] = sym_concatenation;
	v->a[29827] = aux_sym_for_statement_repeat1;
	v->a[29828] = actions(4471);
	v->a[29829] = 3;
	v->a[29830] = sym_raw_string;
	v->a[29831] = sym_ansi_c_string;
	v->a[29832] = sym_word;
	v->a[29833] = state(2422);
	v->a[29834] = 9;
	v->a[29835] = sym_arithmetic_expansion;
	v->a[29836] = sym_brace_expression;
	v->a[29837] = sym_string;
	v->a[29838] = sym_translated_string;
	v->a[29839] = sym_number;
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = sym_simple_expansion;
	v->a[29841] = sym_expansion;
	v->a[29842] = sym_command_substitution;
	v->a[29843] = sym_process_substitution;
	v->a[29844] = actions(2214);
	v->a[29845] = 17;
	v->a[29846] = anon_sym_PIPE_PIPE;
	v->a[29847] = anon_sym_AMP_AMP;
	v->a[29848] = anon_sym_PIPE;
	v->a[29849] = anon_sym_LT;
	v->a[29850] = anon_sym_GT;
	v->a[29851] = anon_sym_LT_LT;
	v->a[29852] = anon_sym_GT_GT;
	v->a[29853] = anon_sym_PIPE_AMP;
	v->a[29854] = anon_sym_AMP_GT;
	v->a[29855] = anon_sym_AMP_GT_GT;
	v->a[29856] = anon_sym_LT_AMP;
	v->a[29857] = anon_sym_GT_AMP;
	v->a[29858] = anon_sym_GT_PIPE;
	v->a[29859] = anon_sym_LT_AMP_DASH;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = anon_sym_GT_AMP_DASH;
	v->a[29861] = anon_sym_LT_LT_DASH;
	v->a[29862] = anon_sym_LT_LT_LT;
	v->a[29863] = 6;
	v->a[29864] = actions(3);
	v->a[29865] = 1;
	v->a[29866] = sym_comment;
	v->a[29867] = actions(4374);
	v->a[29868] = 1;
	v->a[29869] = aux_sym_concatenation_token1;
	v->a[29870] = actions(4376);
	v->a[29871] = 1;
	v->a[29872] = sym__concat;
	v->a[29873] = state(891);
	v->a[29874] = 1;
	v->a[29875] = aux_sym_concatenation_repeat1;
	v->a[29876] = actions(4482);
	v->a[29877] = 5;
	v->a[29878] = sym_file_descriptor;
	v->a[29879] = sym_test_operator;
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = sym__bare_dollar;
	v->a[29881] = sym__brace_start;
	v->a[29882] = aux_sym_heredoc_redirect_token1;
	v->a[29883] = actions(4480);
	v->a[29884] = 42;
	v->a[29885] = anon_sym_LPAREN_LPAREN;
	v->a[29886] = anon_sym_SEMI;
	v->a[29887] = anon_sym_PIPE_PIPE;
	v->a[29888] = anon_sym_AMP_AMP;
	v->a[29889] = anon_sym_PIPE;
	v->a[29890] = anon_sym_AMP;
	v->a[29891] = anon_sym_EQ_EQ;
	v->a[29892] = anon_sym_LT;
	v->a[29893] = anon_sym_GT;
	v->a[29894] = anon_sym_LT_LT;
	v->a[29895] = anon_sym_GT_GT;
	v->a[29896] = anon_sym_esac;
	v->a[29897] = anon_sym_SEMI_SEMI;
	v->a[29898] = anon_sym_SEMI_AMP;
	v->a[29899] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
