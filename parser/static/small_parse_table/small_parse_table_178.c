/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_178.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_890(t_small_parse_table_array *v)
{
	v->a[17800] = 1;
	v->a[17801] = aux_sym_heredoc_redirect_token1;
	v->a[17802] = actions(2516);
	v->a[17803] = 2;
	v->a[17804] = anon_sym_PIPE;
	v->a[17805] = anon_sym_PIPE_AMP;
	v->a[17806] = actions(2706);
	v->a[17807] = 2;
	v->a[17808] = anon_sym_AMP_AMP;
	v->a[17809] = anon_sym_PIPE_PIPE;
	v->a[17810] = actions(2708);
	v->a[17811] = 2;
	v->a[17812] = anon_sym_LT_LT;
	v->a[17813] = anon_sym_LT_LT_DASH;
	v->a[17814] = actions(2745);
	v->a[17815] = 2;
	v->a[17816] = anon_sym_AMP;
	v->a[17817] = anon_sym_SEMI;
	v->a[17818] = state(1989);
	v->a[17819] = 2;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = sym_variable_assignment;
	v->a[17821] = aux_sym_variable_assignments_repeat1;
	v->a[17822] = actions(2514);
	v->a[17823] = 3;
	v->a[17824] = anon_sym_SEMI_SEMI;
	v->a[17825] = anon_sym_SEMI_AMP;
	v->a[17826] = anon_sym_SEMI_SEMI_AMP;
	v->a[17827] = actions(2526);
	v->a[17828] = 3;
	v->a[17829] = sym_file_descriptor;
	v->a[17830] = sym_test_operator;
	v->a[17831] = sym__brace_start;
	v->a[17832] = state(1983);
	v->a[17833] = 3;
	v->a[17834] = sym_file_redirect;
	v->a[17835] = sym_heredoc_redirect;
	v->a[17836] = aux_sym_redirected_statement_repeat1;
	v->a[17837] = actions(2512);
	v->a[17838] = 22;
	v->a[17839] = anon_sym_LT;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = anon_sym_GT;
	v->a[17841] = anon_sym_GT_GT;
	v->a[17842] = anon_sym_AMP_GT;
	v->a[17843] = anon_sym_AMP_GT_GT;
	v->a[17844] = anon_sym_LT_AMP;
	v->a[17845] = anon_sym_GT_AMP;
	v->a[17846] = anon_sym_GT_PIPE;
	v->a[17847] = anon_sym_LT_AMP_DASH;
	v->a[17848] = anon_sym_GT_AMP_DASH;
	v->a[17849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17850] = anon_sym_DOLLAR;
	v->a[17851] = sym__special_character;
	v->a[17852] = anon_sym_DQUOTE;
	v->a[17853] = sym_raw_string;
	v->a[17854] = aux_sym_number_token1;
	v->a[17855] = aux_sym_number_token2;
	v->a[17856] = anon_sym_DOLLAR_LBRACE;
	v->a[17857] = anon_sym_DOLLAR_LPAREN;
	v->a[17858] = anon_sym_BQUOTE;
	v->a[17859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = sym_word;
	v->a[17861] = 6;
	v->a[17862] = actions(3);
	v->a[17863] = 1;
	v->a[17864] = sym_comment;
	v->a[17865] = actions(2042);
	v->a[17866] = 1;
	v->a[17867] = sym_variable_name;
	v->a[17868] = actions(2040);
	v->a[17869] = 2;
	v->a[17870] = aux_sym__simple_variable_name_token1;
	v->a[17871] = aux_sym__multiline_variable_name_token1;
	v->a[17872] = actions(816);
	v->a[17873] = 3;
	v->a[17874] = sym_file_descriptor;
	v->a[17875] = sym_test_operator;
	v->a[17876] = sym__brace_start;
	v->a[17877] = actions(2038);
	v->a[17878] = 9;
	v->a[17879] = anon_sym_BANG;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = anon_sym_DASH;
	v->a[17881] = anon_sym_STAR;
	v->a[17882] = anon_sym_QMARK;
	v->a[17883] = anon_sym_DOLLAR;
	v->a[17884] = anon_sym_POUND;
	v->a[17885] = anon_sym_AT;
	v->a[17886] = anon_sym_0;
	v->a[17887] = anon_sym__;
	v->a[17888] = actions(810);
	v->a[17889] = 28;
	v->a[17890] = anon_sym_PIPE;
	v->a[17891] = anon_sym_PIPE_AMP;
	v->a[17892] = anon_sym_AMP_AMP;
	v->a[17893] = anon_sym_PIPE_PIPE;
	v->a[17894] = anon_sym_LT;
	v->a[17895] = anon_sym_GT;
	v->a[17896] = anon_sym_GT_GT;
	v->a[17897] = anon_sym_AMP_GT;
	v->a[17898] = anon_sym_AMP_GT_GT;
	v->a[17899] = anon_sym_LT_AMP;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
