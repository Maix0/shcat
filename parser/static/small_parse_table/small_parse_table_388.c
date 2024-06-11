/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_388.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1940(t_small_parse_table_array *v)
{
	v->a[38800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38801] = anon_sym_AMP;
	v->a[38802] = aux_sym_concatenation_token1;
	v->a[38803] = anon_sym_DOLLAR;
	v->a[38804] = anon_sym_DQUOTE;
	v->a[38805] = sym_raw_string;
	v->a[38806] = sym_number;
	v->a[38807] = anon_sym_DOLLAR_LBRACE;
	v->a[38808] = anon_sym_DOLLAR_LPAREN;
	v->a[38809] = anon_sym_BQUOTE;
	v->a[38810] = sym_word;
	v->a[38811] = anon_sym_SEMI;
	v->a[38812] = 3;
	v->a[38813] = actions(3);
	v->a[38814] = 1;
	v->a[38815] = sym_comment;
	v->a[38816] = actions(1076);
	v->a[38817] = 4;
	v->a[38818] = sym_file_descriptor;
	v->a[38819] = sym__concat;
	small_parse_table_1941(v);
}

void	small_parse_table_1941(t_small_parse_table_array *v)
{
	v->a[38820] = sym_variable_name;
	v->a[38821] = ts_builtin_sym_end;
	v->a[38822] = actions(1074);
	v->a[38823] = 29;
	v->a[38824] = anon_sym_PIPE;
	v->a[38825] = anon_sym_SEMI_SEMI;
	v->a[38826] = anon_sym_AMP_AMP;
	v->a[38827] = anon_sym_PIPE_PIPE;
	v->a[38828] = anon_sym_LT;
	v->a[38829] = anon_sym_GT;
	v->a[38830] = anon_sym_GT_GT;
	v->a[38831] = anon_sym_AMP_GT;
	v->a[38832] = anon_sym_AMP_GT_GT;
	v->a[38833] = anon_sym_LT_AMP;
	v->a[38834] = anon_sym_GT_AMP;
	v->a[38835] = anon_sym_GT_PIPE;
	v->a[38836] = anon_sym_LT_AMP_DASH;
	v->a[38837] = anon_sym_GT_AMP_DASH;
	v->a[38838] = anon_sym_LT_LT;
	v->a[38839] = anon_sym_LT_LT_DASH;
	small_parse_table_1942(v);
}

void	small_parse_table_1942(t_small_parse_table_array *v)
{
	v->a[38840] = aux_sym_heredoc_redirect_token1;
	v->a[38841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38842] = anon_sym_AMP;
	v->a[38843] = aux_sym_concatenation_token1;
	v->a[38844] = anon_sym_DOLLAR;
	v->a[38845] = anon_sym_DQUOTE;
	v->a[38846] = sym_raw_string;
	v->a[38847] = sym_number;
	v->a[38848] = anon_sym_DOLLAR_LBRACE;
	v->a[38849] = anon_sym_DOLLAR_LPAREN;
	v->a[38850] = anon_sym_BQUOTE;
	v->a[38851] = sym_word;
	v->a[38852] = anon_sym_SEMI;
	v->a[38853] = 14;
	v->a[38854] = actions(3);
	v->a[38855] = 1;
	v->a[38856] = sym_comment;
	v->a[38857] = actions(555);
	v->a[38858] = 1;
	v->a[38859] = sym_file_descriptor;
	small_parse_table_1943(v);
}

void	small_parse_table_1943(t_small_parse_table_array *v)
{
	v->a[38860] = actions(1011);
	v->a[38861] = 1;
	v->a[38862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38863] = actions(1013);
	v->a[38864] = 1;
	v->a[38865] = anon_sym_DOLLAR;
	v->a[38866] = actions(1015);
	v->a[38867] = 1;
	v->a[38868] = anon_sym_DQUOTE;
	v->a[38869] = actions(1017);
	v->a[38870] = 1;
	v->a[38871] = anon_sym_DOLLAR_LBRACE;
	v->a[38872] = actions(1019);
	v->a[38873] = 1;
	v->a[38874] = anon_sym_DOLLAR_LPAREN;
	v->a[38875] = actions(1021);
	v->a[38876] = 1;
	v->a[38877] = anon_sym_BQUOTE;
	v->a[38878] = actions(1023);
	v->a[38879] = 1;
	small_parse_table_1944(v);
}

void	small_parse_table_1944(t_small_parse_table_array *v)
{
	v->a[38880] = sym__bare_dollar;
	v->a[38881] = state(475);
	v->a[38882] = 1;
	v->a[38883] = aux_sym_command_repeat2;
	v->a[38884] = state(1114);
	v->a[38885] = 1;
	v->a[38886] = sym_concatenation;
	v->a[38887] = actions(1009);
	v->a[38888] = 3;
	v->a[38889] = sym_raw_string;
	v->a[38890] = sym_number;
	v->a[38891] = sym_word;
	v->a[38892] = state(951);
	v->a[38893] = 5;
	v->a[38894] = sym_arithmetic_expansion;
	v->a[38895] = sym_string;
	v->a[38896] = sym_simple_expansion;
	v->a[38897] = sym_expansion;
	v->a[38898] = sym_command_substitution;
	v->a[38899] = actions(557);
	small_parse_table_1945(v);
}

/* EOF small_parse_table_388.c */
