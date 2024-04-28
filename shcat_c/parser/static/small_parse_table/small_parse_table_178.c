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
	v->a[17801] = sym_test_operator;
	v->a[17802] = state(2161);
	v->a[17803] = 1;
	v->a[17804] = aux_sym__literal_repeat1;
	v->a[17805] = actions(2216);
	v->a[17806] = 2;
	v->a[17807] = sym_file_descriptor;
	v->a[17808] = aux_sym_heredoc_redirect_token1;
	v->a[17809] = actions(3230);
	v->a[17810] = 2;
	v->a[17811] = anon_sym_LPAREN_LPAREN;
	v->a[17812] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17813] = actions(3263);
	v->a[17814] = 2;
	v->a[17815] = anon_sym_LT_LPAREN;
	v->a[17816] = anon_sym_GT_LPAREN;
	v->a[17817] = state(715);
	v->a[17818] = 2;
	v->a[17819] = sym_concatenation;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = aux_sym_for_statement_repeat1;
	v->a[17821] = actions(3634);
	v->a[17822] = 3;
	v->a[17823] = sym_raw_string;
	v->a[17824] = sym_ansi_c_string;
	v->a[17825] = sym_word;
	v->a[17826] = state(1918);
	v->a[17827] = 9;
	v->a[17828] = sym_arithmetic_expansion;
	v->a[17829] = sym_brace_expression;
	v->a[17830] = sym_string;
	v->a[17831] = sym_translated_string;
	v->a[17832] = sym_number;
	v->a[17833] = sym_simple_expansion;
	v->a[17834] = sym_expansion;
	v->a[17835] = sym_command_substitution;
	v->a[17836] = sym_process_substitution;
	v->a[17837] = actions(2214);
	v->a[17838] = 20;
	v->a[17839] = anon_sym_SEMI;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = anon_sym_PIPE_PIPE;
	v->a[17841] = anon_sym_AMP_AMP;
	v->a[17842] = anon_sym_PIPE;
	v->a[17843] = anon_sym_AMP;
	v->a[17844] = anon_sym_LT;
	v->a[17845] = anon_sym_GT;
	v->a[17846] = anon_sym_LT_LT;
	v->a[17847] = anon_sym_GT_GT;
	v->a[17848] = anon_sym_SEMI_SEMI;
	v->a[17849] = anon_sym_PIPE_AMP;
	v->a[17850] = anon_sym_AMP_GT;
	v->a[17851] = anon_sym_AMP_GT_GT;
	v->a[17852] = anon_sym_LT_AMP;
	v->a[17853] = anon_sym_GT_AMP;
	v->a[17854] = anon_sym_GT_PIPE;
	v->a[17855] = anon_sym_LT_AMP_DASH;
	v->a[17856] = anon_sym_GT_AMP_DASH;
	v->a[17857] = anon_sym_LT_LT_DASH;
	v->a[17858] = anon_sym_LT_LT_LT;
	v->a[17859] = 8;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = actions(3);
	v->a[17861] = 1;
	v->a[17862] = sym_comment;
	v->a[17863] = actions(2042);
	v->a[17864] = 1;
	v->a[17865] = anon_sym_DQUOTE;
	v->a[17866] = actions(3647);
	v->a[17867] = 1;
	v->a[17868] = sym_variable_name;
	v->a[17869] = state(1547);
	v->a[17870] = 1;
	v->a[17871] = sym_string;
	v->a[17872] = actions(3645);
	v->a[17873] = 2;
	v->a[17874] = aux_sym__simple_variable_name_token1;
	v->a[17875] = aux_sym__multiline_variable_name_token1;
	v->a[17876] = actions(1235);
	v->a[17877] = 4;
	v->a[17878] = sym_file_descriptor;
	v->a[17879] = sym_test_operator;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = sym__brace_start;
	v->a[17881] = ts_builtin_sym_end;
	v->a[17882] = actions(3643);
	v->a[17883] = 9;
	v->a[17884] = anon_sym_DASH;
	v->a[17885] = anon_sym_STAR;
	v->a[17886] = anon_sym_BANG;
	v->a[17887] = anon_sym_QMARK;
	v->a[17888] = anon_sym_DOLLAR;
	v->a[17889] = anon_sym_POUND;
	v->a[17890] = anon_sym_AT2;
	v->a[17891] = anon_sym_0;
	v->a[17892] = anon_sym__;
	v->a[17893] = actions(1227);
	v->a[17894] = 35;
	v->a[17895] = anon_sym_LPAREN_LPAREN;
	v->a[17896] = anon_sym_SEMI;
	v->a[17897] = anon_sym_PIPE_PIPE;
	v->a[17898] = anon_sym_AMP_AMP;
	v->a[17899] = anon_sym_PIPE;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
