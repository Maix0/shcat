/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_588.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2940(t_small_parse_table_array *v)
{
	v->a[58800] = actions(3195);
	v->a[58801] = 30;
	v->a[58802] = anon_sym_PIPE;
	v->a[58803] = anon_sym_SEMI_SEMI;
	v->a[58804] = anon_sym_PIPE_AMP;
	v->a[58805] = anon_sym_AMP_AMP;
	v->a[58806] = anon_sym_PIPE_PIPE;
	v->a[58807] = anon_sym_LT;
	v->a[58808] = anon_sym_GT;
	v->a[58809] = anon_sym_GT_GT;
	v->a[58810] = anon_sym_AMP_GT;
	v->a[58811] = anon_sym_AMP_GT_GT;
	v->a[58812] = anon_sym_LT_AMP;
	v->a[58813] = anon_sym_GT_AMP;
	v->a[58814] = anon_sym_GT_PIPE;
	v->a[58815] = anon_sym_LT_AMP_DASH;
	v->a[58816] = anon_sym_GT_AMP_DASH;
	v->a[58817] = anon_sym_LT_LT;
	v->a[58818] = anon_sym_LT_LT_DASH;
	v->a[58819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2941(v);
}

void	small_parse_table_2941(t_small_parse_table_array *v)
{
	v->a[58820] = anon_sym_AMP;
	v->a[58821] = anon_sym_DOLLAR;
	v->a[58822] = anon_sym_DQUOTE;
	v->a[58823] = sym_raw_string;
	v->a[58824] = aux_sym_number_token1;
	v->a[58825] = aux_sym_number_token2;
	v->a[58826] = anon_sym_DOLLAR_LBRACE;
	v->a[58827] = anon_sym_DOLLAR_LPAREN;
	v->a[58828] = anon_sym_BQUOTE;
	v->a[58829] = anon_sym_DOLLAR_BQUOTE;
	v->a[58830] = sym_word;
	v->a[58831] = anon_sym_SEMI;
	v->a[58832] = 10;
	v->a[58833] = actions(57);
	v->a[58834] = 1;
	v->a[58835] = sym_comment;
	v->a[58836] = actions(2516);
	v->a[58837] = 1;
	v->a[58838] = anon_sym_PIPE;
	v->a[58839] = actions(2630);
	small_parse_table_2942(v);
}

void	small_parse_table_2942(t_small_parse_table_array *v)
{
	v->a[58840] = 1;
	v->a[58841] = anon_sym_LT_LT;
	v->a[58842] = actions(2638);
	v->a[58843] = 1;
	v->a[58844] = anon_sym_PIPE_AMP;
	v->a[58845] = actions(3856);
	v->a[58846] = 1;
	v->a[58847] = sym_variable_name;
	v->a[58848] = state(2637);
	v->a[58849] = 2;
	v->a[58850] = sym_variable_assignment;
	v->a[58851] = aux_sym_variable_assignments_repeat1;
	v->a[58852] = actions(2632);
	v->a[58853] = 3;
	v->a[58854] = anon_sym_AMP_AMP;
	v->a[58855] = anon_sym_PIPE_PIPE;
	v->a[58856] = anon_sym_LT_LT_DASH;
	v->a[58857] = state(2632);
	v->a[58858] = 3;
	v->a[58859] = sym_file_redirect;
	small_parse_table_2943(v);
}

void	small_parse_table_2943(t_small_parse_table_array *v)
{
	v->a[58860] = sym_heredoc_redirect;
	v->a[58861] = aux_sym_redirected_statement_repeat1;
	v->a[58862] = actions(2512);
	v->a[58863] = 10;
	v->a[58864] = anon_sym_LT;
	v->a[58865] = anon_sym_GT;
	v->a[58866] = anon_sym_AMP_GT;
	v->a[58867] = anon_sym_LT_AMP;
	v->a[58868] = anon_sym_GT_AMP;
	v->a[58869] = anon_sym_DOLLAR;
	v->a[58870] = aux_sym_number_token1;
	v->a[58871] = aux_sym_number_token2;
	v->a[58872] = anon_sym_DOLLAR_LPAREN;
	v->a[58873] = sym_word;
	v->a[58874] = actions(2526);
	v->a[58875] = 15;
	v->a[58876] = sym_file_descriptor;
	v->a[58877] = sym_test_operator;
	v->a[58878] = sym__brace_start;
	v->a[58879] = anon_sym_GT_GT;
	small_parse_table_2944(v);
}

void	small_parse_table_2944(t_small_parse_table_array *v)
{
	v->a[58880] = anon_sym_AMP_GT_GT;
	v->a[58881] = anon_sym_GT_PIPE;
	v->a[58882] = anon_sym_LT_AMP_DASH;
	v->a[58883] = anon_sym_GT_AMP_DASH;
	v->a[58884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58885] = sym__special_character;
	v->a[58886] = anon_sym_DQUOTE;
	v->a[58887] = sym_raw_string;
	v->a[58888] = anon_sym_DOLLAR_LBRACE;
	v->a[58889] = anon_sym_BQUOTE;
	v->a[58890] = anon_sym_DOLLAR_BQUOTE;
	v->a[58891] = 8;
	v->a[58892] = actions(3);
	v->a[58893] = 1;
	v->a[58894] = sym_comment;
	v->a[58895] = actions(3632);
	v->a[58896] = 1;
	v->a[58897] = aux_sym_heredoc_redirect_token1;
	v->a[58898] = actions(3634);
	v->a[58899] = 1;
	small_parse_table_2945(v);
}

/* EOF small_parse_table_588.c */
