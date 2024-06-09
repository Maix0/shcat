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
	v->a[38800] = 1;
	v->a[38801] = sym_comment;
	v->a[38802] = actions(1239);
	v->a[38803] = 13;
	v->a[38804] = anon_sym_PIPE;
	v->a[38805] = anon_sym_EQ;
	v->a[38806] = anon_sym_LT;
	v->a[38807] = anon_sym_GT;
	v->a[38808] = anon_sym_GT_GT;
	v->a[38809] = anon_sym_LT_LT;
	v->a[38810] = anon_sym_CARET;
	v->a[38811] = anon_sym_AMP;
	v->a[38812] = anon_sym_PLUS;
	v->a[38813] = anon_sym_DASH;
	v->a[38814] = anon_sym_STAR;
	v->a[38815] = anon_sym_SLASH;
	v->a[38816] = anon_sym_PERCENT;
	v->a[38817] = actions(1241);
	v->a[38818] = 21;
	v->a[38819] = anon_sym_AMP_AMP;
	small_parse_table_1941(v);
}

void	small_parse_table_1941(t_small_parse_table_array *v)
{
	v->a[38820] = anon_sym_PIPE_PIPE;
	v->a[38821] = anon_sym_RPAREN_RPAREN;
	v->a[38822] = anon_sym_PLUS_EQ;
	v->a[38823] = anon_sym_DASH_EQ;
	v->a[38824] = anon_sym_STAR_EQ;
	v->a[38825] = anon_sym_SLASH_EQ;
	v->a[38826] = anon_sym_PERCENT_EQ;
	v->a[38827] = anon_sym_LT_LT_EQ;
	v->a[38828] = anon_sym_GT_GT_EQ;
	v->a[38829] = anon_sym_AMP_EQ;
	v->a[38830] = anon_sym_CARET_EQ;
	v->a[38831] = anon_sym_PIPE_EQ;
	v->a[38832] = anon_sym_EQ_EQ;
	v->a[38833] = anon_sym_BANG_EQ;
	v->a[38834] = anon_sym_LT_EQ;
	v->a[38835] = anon_sym_GT_EQ;
	v->a[38836] = anon_sym_QMARK;
	v->a[38837] = anon_sym_COLON;
	v->a[38838] = anon_sym_PLUS_PLUS2;
	v->a[38839] = anon_sym_DASH_DASH2;
	small_parse_table_1942(v);
}

void	small_parse_table_1942(t_small_parse_table_array *v)
{
	v->a[38840] = 3;
	v->a[38841] = actions(3);
	v->a[38842] = 1;
	v->a[38843] = sym_comment;
	v->a[38844] = actions(1194);
	v->a[38845] = 4;
	v->a[38846] = sym_file_descriptor;
	v->a[38847] = sym__concat;
	v->a[38848] = sym__bare_dollar;
	v->a[38849] = ts_builtin_sym_end;
	v->a[38850] = actions(1196);
	v->a[38851] = 30;
	v->a[38852] = anon_sym_PIPE;
	v->a[38853] = anon_sym_SEMI_SEMI;
	v->a[38854] = anon_sym_AMP_AMP;
	v->a[38855] = anon_sym_PIPE_PIPE;
	v->a[38856] = anon_sym_LT;
	v->a[38857] = anon_sym_GT;
	v->a[38858] = anon_sym_GT_GT;
	v->a[38859] = anon_sym_AMP_GT;
	small_parse_table_1943(v);
}

void	small_parse_table_1943(t_small_parse_table_array *v)
{
	v->a[38860] = anon_sym_AMP_GT_GT;
	v->a[38861] = anon_sym_LT_AMP;
	v->a[38862] = anon_sym_GT_AMP;
	v->a[38863] = anon_sym_GT_PIPE;
	v->a[38864] = anon_sym_LT_AMP_DASH;
	v->a[38865] = anon_sym_GT_AMP_DASH;
	v->a[38866] = anon_sym_LT_LT;
	v->a[38867] = anon_sym_LT_LT_DASH;
	v->a[38868] = aux_sym_heredoc_redirect_token1;
	v->a[38869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38870] = anon_sym_AMP;
	v->a[38871] = aux_sym_concatenation_token1;
	v->a[38872] = anon_sym_DOLLAR;
	v->a[38873] = anon_sym_DQUOTE;
	v->a[38874] = sym_raw_string;
	v->a[38875] = aux_sym_number_token1;
	v->a[38876] = aux_sym_number_token2;
	v->a[38877] = anon_sym_DOLLAR_LBRACE;
	v->a[38878] = anon_sym_DOLLAR_LPAREN;
	v->a[38879] = anon_sym_BQUOTE;
	small_parse_table_1944(v);
}

void	small_parse_table_1944(t_small_parse_table_array *v)
{
	v->a[38880] = sym_word;
	v->a[38881] = anon_sym_SEMI;
	v->a[38882] = 3;
	v->a[38883] = actions(3);
	v->a[38884] = 1;
	v->a[38885] = sym_comment;
	v->a[38886] = actions(1188);
	v->a[38887] = 4;
	v->a[38888] = sym_file_descriptor;
	v->a[38889] = sym__concat;
	v->a[38890] = sym_variable_name;
	v->a[38891] = ts_builtin_sym_end;
	v->a[38892] = actions(1186);
	v->a[38893] = 30;
	v->a[38894] = anon_sym_PIPE;
	v->a[38895] = anon_sym_SEMI_SEMI;
	v->a[38896] = anon_sym_AMP_AMP;
	v->a[38897] = anon_sym_PIPE_PIPE;
	v->a[38898] = anon_sym_LT;
	v->a[38899] = anon_sym_GT;
	small_parse_table_1945(v);
}

/* EOF small_parse_table_388.c */
