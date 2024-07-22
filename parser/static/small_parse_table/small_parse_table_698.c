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
	v->a[69800] = anon_sym_PIPE;
	v->a[69801] = anon_sym_AMP_AMP;
	v->a[69802] = anon_sym_PIPE_PIPE;
	v->a[69803] = anon_sym_LT_LT;
	v->a[69804] = anon_sym_LT_LT_DASH;
	v->a[69805] = actions(2777);
	v->a[69806] = 7;
	v->a[69807] = anon_sym_LT;
	v->a[69808] = anon_sym_GT;
	v->a[69809] = anon_sym_GT_GT;
	v->a[69810] = anon_sym_LT_AMP;
	v->a[69811] = anon_sym_GT_AMP;
	v->a[69812] = anon_sym_GT_PIPE;
	v->a[69813] = anon_sym_LT_GT;
	v->a[69814] = 10;
	v->a[69815] = actions(3);
	v->a[69816] = 1;
	v->a[69817] = sym_comment;
	v->a[69818] = actions(2399);
	v->a[69819] = 1;
	small_parse_table_3491(v);
}

void	small_parse_table_3491(t_small_parse_table_array *v)
{
	v->a[69820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69821] = actions(2401);
	v->a[69822] = 1;
	v->a[69823] = anon_sym_DOLLAR;
	v->a[69824] = actions(2403);
	v->a[69825] = 1;
	v->a[69826] = anon_sym_DQUOTE;
	v->a[69827] = actions(2405);
	v->a[69828] = 1;
	v->a[69829] = anon_sym_DOLLAR_LBRACE;
	v->a[69830] = actions(2407);
	v->a[69831] = 1;
	v->a[69832] = anon_sym_DOLLAR_LPAREN;
	v->a[69833] = actions(2409);
	v->a[69834] = 1;
	v->a[69835] = anon_sym_BQUOTE;
	v->a[69836] = state(439);
	v->a[69837] = 2;
	v->a[69838] = sym_concatenation;
	v->a[69839] = aux_sym_for_statement_repeat1;
	small_parse_table_3492(v);
}

void	small_parse_table_3492(t_small_parse_table_array *v)
{
	v->a[69840] = actions(2783);
	v->a[69841] = 3;
	v->a[69842] = sym_raw_string;
	v->a[69843] = sym_number;
	v->a[69844] = sym_word;
	v->a[69845] = state(806);
	v->a[69846] = 5;
	v->a[69847] = sym_arithmetic_expansion;
	v->a[69848] = sym_string;
	v->a[69849] = sym_simple_expansion;
	v->a[69850] = sym_expansion;
	v->a[69851] = sym_command_substitution;
	v->a[69852] = 4;
	v->a[69853] = actions(501);
	v->a[69854] = 1;
	v->a[69855] = sym_comment;
	v->a[69856] = state(1371);
	v->a[69857] = 3;
	v->a[69858] = sym_file_redirect;
	v->a[69859] = sym_heredoc_redirect;
	small_parse_table_3493(v);
}

void	small_parse_table_3493(t_small_parse_table_array *v)
{
	v->a[69860] = aux_sym_redirected_statement_repeat1;
	v->a[69861] = actions(1057);
	v->a[69862] = 4;
	v->a[69863] = anon_sym_PIPE;
	v->a[69864] = anon_sym_LT;
	v->a[69865] = anon_sym_GT;
	v->a[69866] = anon_sym_LT_LT;
	v->a[69867] = actions(1055);
	v->a[69868] = 9;
	v->a[69869] = sym_file_descriptor;
	v->a[69870] = anon_sym_AMP_AMP;
	v->a[69871] = anon_sym_PIPE_PIPE;
	v->a[69872] = anon_sym_GT_GT;
	v->a[69873] = anon_sym_LT_AMP;
	v->a[69874] = anon_sym_GT_AMP;
	v->a[69875] = anon_sym_GT_PIPE;
	v->a[69876] = anon_sym_LT_GT;
	v->a[69877] = anon_sym_LT_LT_DASH;
	v->a[69878] = 6;
	v->a[69879] = actions(3);
	small_parse_table_3494(v);
}

void	small_parse_table_3494(t_small_parse_table_array *v)
{
	v->a[69880] = 1;
	v->a[69881] = sym_comment;
	v->a[69882] = actions(2061);
	v->a[69883] = 1;
	v->a[69884] = aux_sym_heredoc_redirect_token1;
	v->a[69885] = actions(2758);
	v->a[69886] = 1;
	v->a[69887] = sym_file_descriptor;
	v->a[69888] = state(1397);
	v->a[69889] = 2;
	v->a[69890] = sym_file_redirect;
	v->a[69891] = aux_sym_redirected_statement_repeat2;
	v->a[69892] = actions(2059);
	v->a[69893] = 5;
	v->a[69894] = anon_sym_PIPE;
	v->a[69895] = anon_sym_AMP_AMP;
	v->a[69896] = anon_sym_PIPE_PIPE;
	v->a[69897] = anon_sym_LT_LT;
	v->a[69898] = anon_sym_LT_LT_DASH;
	v->a[69899] = actions(2425);
	small_parse_table_3495(v);
}

/* EOF small_parse_table_698.c */
