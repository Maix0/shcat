/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_338.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1690(t_small_parse_table_array *v)
{
	v->a[33800] = anon_sym_PIPE_AMP;
	v->a[33801] = anon_sym_AMP_AMP;
	v->a[33802] = anon_sym_PIPE_PIPE;
	v->a[33803] = anon_sym_LT;
	v->a[33804] = anon_sym_GT;
	v->a[33805] = anon_sym_GT_GT;
	v->a[33806] = anon_sym_AMP_GT;
	v->a[33807] = anon_sym_AMP_GT_GT;
	v->a[33808] = anon_sym_LT_AMP;
	v->a[33809] = anon_sym_GT_AMP;
	v->a[33810] = anon_sym_GT_PIPE;
	v->a[33811] = anon_sym_LT_AMP_DASH;
	v->a[33812] = anon_sym_GT_AMP_DASH;
	v->a[33813] = anon_sym_LT_LT;
	v->a[33814] = anon_sym_LT_LT_DASH;
	v->a[33815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33816] = anon_sym_AMP;
	v->a[33817] = anon_sym_DOLLAR;
	v->a[33818] = sym__special_character;
	v->a[33819] = anon_sym_DQUOTE;
	small_parse_table_1691(v);
}

void	small_parse_table_1691(t_small_parse_table_array *v)
{
	v->a[33820] = sym_raw_string;
	v->a[33821] = aux_sym_number_token1;
	v->a[33822] = aux_sym_number_token2;
	v->a[33823] = anon_sym_DOLLAR_LBRACE;
	v->a[33824] = anon_sym_DOLLAR_LPAREN;
	v->a[33825] = anon_sym_BQUOTE;
	v->a[33826] = anon_sym_DOLLAR_BQUOTE;
	v->a[33827] = sym_word;
	v->a[33828] = anon_sym_SEMI;
	v->a[33829] = 6;
	v->a[33830] = actions(3);
	v->a[33831] = 1;
	v->a[33832] = sym_comment;
	v->a[33833] = actions(3438);
	v->a[33834] = 1;
	v->a[33835] = aux_sym_concatenation_token1;
	v->a[33836] = actions(3440);
	v->a[33837] = 1;
	v->a[33838] = sym__concat;
	v->a[33839] = state(903);
	small_parse_table_1692(v);
}

void	small_parse_table_1692(t_small_parse_table_array *v)
{
	v->a[33840] = 1;
	v->a[33841] = aux_sym_concatenation_repeat1;
	v->a[33842] = actions(3121);
	v->a[33843] = 6;
	v->a[33844] = sym_file_descriptor;
	v->a[33845] = sym_variable_name;
	v->a[33846] = sym_test_operator;
	v->a[33847] = sym__brace_start;
	v->a[33848] = ts_builtin_sym_end;
	v->a[33849] = aux_sym_heredoc_redirect_token1;
	v->a[33850] = actions(3119);
	v->a[33851] = 31;
	v->a[33852] = anon_sym_PIPE;
	v->a[33853] = anon_sym_SEMI_SEMI;
	v->a[33854] = anon_sym_PIPE_AMP;
	v->a[33855] = anon_sym_AMP_AMP;
	v->a[33856] = anon_sym_PIPE_PIPE;
	v->a[33857] = anon_sym_LT;
	v->a[33858] = anon_sym_GT;
	v->a[33859] = anon_sym_GT_GT;
	small_parse_table_1693(v);
}

void	small_parse_table_1693(t_small_parse_table_array *v)
{
	v->a[33860] = anon_sym_AMP_GT;
	v->a[33861] = anon_sym_AMP_GT_GT;
	v->a[33862] = anon_sym_LT_AMP;
	v->a[33863] = anon_sym_GT_AMP;
	v->a[33864] = anon_sym_GT_PIPE;
	v->a[33865] = anon_sym_LT_AMP_DASH;
	v->a[33866] = anon_sym_GT_AMP_DASH;
	v->a[33867] = anon_sym_LT_LT;
	v->a[33868] = anon_sym_LT_LT_DASH;
	v->a[33869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33870] = anon_sym_AMP;
	v->a[33871] = anon_sym_DOLLAR;
	v->a[33872] = sym__special_character;
	v->a[33873] = anon_sym_DQUOTE;
	v->a[33874] = sym_raw_string;
	v->a[33875] = aux_sym_number_token1;
	v->a[33876] = aux_sym_number_token2;
	v->a[33877] = anon_sym_DOLLAR_LBRACE;
	v->a[33878] = anon_sym_DOLLAR_LPAREN;
	v->a[33879] = anon_sym_BQUOTE;
	small_parse_table_1694(v);
}

void	small_parse_table_1694(t_small_parse_table_array *v)
{
	v->a[33880] = anon_sym_DOLLAR_BQUOTE;
	v->a[33881] = sym_word;
	v->a[33882] = anon_sym_SEMI;
	v->a[33883] = 6;
	v->a[33884] = actions(3);
	v->a[33885] = 1;
	v->a[33886] = sym_comment;
	v->a[33887] = actions(3438);
	v->a[33888] = 1;
	v->a[33889] = aux_sym_concatenation_token1;
	v->a[33890] = actions(3440);
	v->a[33891] = 1;
	v->a[33892] = sym__concat;
	v->a[33893] = state(903);
	v->a[33894] = 1;
	v->a[33895] = aux_sym_concatenation_repeat1;
	v->a[33896] = actions(1390);
	v->a[33897] = 6;
	v->a[33898] = sym_file_descriptor;
	v->a[33899] = sym_variable_name;
	small_parse_table_1695(v);
}

/* EOF small_parse_table_338.c */
