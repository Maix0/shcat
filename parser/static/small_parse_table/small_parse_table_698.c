/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_698.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3490(t_small_parse_table_array *v)
{
	v->a[69800] = 1;
	v->a[69801] = anon_sym_DOLLAR_LBRACE;
	v->a[69802] = actions(1082);
	v->a[69803] = 1;
	v->a[69804] = anon_sym_DOLLAR_LPAREN;
	v->a[69805] = actions(1084);
	v->a[69806] = 1;
	v->a[69807] = anon_sym_BQUOTE;
	v->a[69808] = state(1067);
	v->a[69809] = 2;
	v->a[69810] = sym_concatenation;
	v->a[69811] = aux_sym_for_statement_repeat1;
	v->a[69812] = actions(1891);
	v->a[69813] = 3;
	v->a[69814] = sym_raw_string;
	v->a[69815] = sym_number;
	v->a[69816] = sym_word;
	v->a[69817] = state(1398);
	v->a[69818] = 5;
	v->a[69819] = sym_arithmetic_expansion;
	small_parse_table_3491(v);
}

void	small_parse_table_3491(t_small_parse_table_array *v)
{
	v->a[69820] = sym_string;
	v->a[69821] = sym_simple_expansion;
	v->a[69822] = sym_expansion;
	v->a[69823] = sym_command_substitution;
	v->a[69824] = 10;
	v->a[69825] = actions(3);
	v->a[69826] = 1;
	v->a[69827] = sym_comment;
	v->a[69828] = actions(2400);
	v->a[69829] = 1;
	v->a[69830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69831] = actions(2404);
	v->a[69832] = 1;
	v->a[69833] = anon_sym_DQUOTE;
	v->a[69834] = actions(2406);
	v->a[69835] = 1;
	v->a[69836] = anon_sym_DOLLAR_LBRACE;
	v->a[69837] = actions(2408);
	v->a[69838] = 1;
	v->a[69839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3492(v);
}

void	small_parse_table_3492(t_small_parse_table_array *v)
{
	v->a[69840] = actions(2410);
	v->a[69841] = 1;
	v->a[69842] = anon_sym_BQUOTE;
	v->a[69843] = actions(2532);
	v->a[69844] = 1;
	v->a[69845] = anon_sym_DOLLAR;
	v->a[69846] = state(199);
	v->a[69847] = 2;
	v->a[69848] = sym_concatenation;
	v->a[69849] = aux_sym_for_statement_repeat1;
	v->a[69850] = actions(2736);
	v->a[69851] = 3;
	v->a[69852] = sym_raw_string;
	v->a[69853] = sym_number;
	v->a[69854] = sym_word;
	v->a[69855] = state(384);
	v->a[69856] = 5;
	v->a[69857] = sym_arithmetic_expansion;
	v->a[69858] = sym_string;
	v->a[69859] = sym_simple_expansion;
	small_parse_table_3493(v);
}

void	small_parse_table_3493(t_small_parse_table_array *v)
{
	v->a[69860] = sym_expansion;
	v->a[69861] = sym_command_substitution;
	v->a[69862] = 3;
	v->a[69863] = actions(664);
	v->a[69864] = 1;
	v->a[69865] = sym_comment;
	v->a[69866] = actions(1088);
	v->a[69867] = 4;
	v->a[69868] = anon_sym_PIPE;
	v->a[69869] = anon_sym_LT;
	v->a[69870] = anon_sym_GT;
	v->a[69871] = anon_sym_LT_LT;
	v->a[69872] = actions(1093);
	v->a[69873] = 12;
	v->a[69874] = sym_file_descriptor;
	v->a[69875] = sym__concat;
	v->a[69876] = sym_variable_name;
	v->a[69877] = anon_sym_AMP_AMP;
	v->a[69878] = anon_sym_PIPE_PIPE;
	v->a[69879] = anon_sym_GT_GT;
	small_parse_table_3494(v);
}

void	small_parse_table_3494(t_small_parse_table_array *v)
{
	v->a[69880] = anon_sym_LT_AMP;
	v->a[69881] = anon_sym_GT_AMP;
	v->a[69882] = anon_sym_GT_PIPE;
	v->a[69883] = anon_sym_LT_GT;
	v->a[69884] = anon_sym_LT_LT_DASH;
	v->a[69885] = aux_sym_concatenation_token1;
	v->a[69886] = 6;
	v->a[69887] = actions(3);
	v->a[69888] = 1;
	v->a[69889] = sym_comment;
	v->a[69890] = actions(2051);
	v->a[69891] = 1;
	v->a[69892] = aux_sym_heredoc_redirect_token1;
	v->a[69893] = actions(2738);
	v->a[69894] = 1;
	v->a[69895] = sym_file_descriptor;
	v->a[69896] = state(1381);
	v->a[69897] = 2;
	v->a[69898] = sym_file_redirect;
	v->a[69899] = aux_sym_redirected_statement_repeat2;
	small_parse_table_3495(v);
}

/* EOF small_parse_table_698.c */
