/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2315.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11575(t_small_parse_table_array *v)
{
	v->a[231500] = 1;
	v->a[231501] = sym__comment_word;
	v->a[231502] = actions(10928);
	v->a[231503] = 1;
	v->a[231504] = anon_sym_DOLLAR;
	v->a[231505] = actions(7992);
	v->a[231506] = 2;
	v->a[231507] = anon_sym_LPAREN_LPAREN;
	v->a[231508] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231509] = actions(8018);
	v->a[231510] = 2;
	v->a[231511] = anon_sym_LT_LPAREN;
	v->a[231512] = anon_sym_GT_LPAREN;
	v->a[231513] = actions(9358);
	v->a[231514] = 2;
	v->a[231515] = sym_test_operator;
	v->a[231516] = sym__special_character;
	v->a[231517] = actions(9360);
	v->a[231518] = 3;
	v->a[231519] = sym__bare_dollar;
	small_parse_table_11576(v);
}

void	small_parse_table_11576(t_small_parse_table_array *v)
{
	v->a[231520] = sym_raw_string;
	v->a[231521] = sym_ansi_c_string;
	v->a[231522] = state(3510);
	v->a[231523] = 9;
	v->a[231524] = sym_arithmetic_expansion;
	v->a[231525] = sym_brace_expression;
	v->a[231526] = sym_string;
	v->a[231527] = sym_translated_string;
	v->a[231528] = sym_number;
	v->a[231529] = sym_simple_expansion;
	v->a[231530] = sym_expansion;
	v->a[231531] = sym_command_substitution;
	v->a[231532] = sym_process_substitution;
	v->a[231533] = 18;
	v->a[231534] = actions(3);
	v->a[231535] = 1;
	v->a[231536] = sym_comment;
	v->a[231537] = actions(3441);
	v->a[231538] = 1;
	v->a[231539] = aux_sym_number_token1;
	small_parse_table_11577(v);
}

void	small_parse_table_11577(t_small_parse_table_array *v)
{
	v->a[231540] = actions(3443);
	v->a[231541] = 1;
	v->a[231542] = aux_sym_number_token2;
	v->a[231543] = actions(3447);
	v->a[231544] = 1;
	v->a[231545] = anon_sym_DOLLAR_LPAREN;
	v->a[231546] = actions(3459);
	v->a[231547] = 1;
	v->a[231548] = sym__brace_start;
	v->a[231549] = actions(10930);
	v->a[231550] = 1;
	v->a[231551] = sym_word;
	v->a[231552] = actions(10934);
	v->a[231553] = 1;
	v->a[231554] = anon_sym_DOLLAR_LBRACK;
	v->a[231555] = actions(10936);
	v->a[231556] = 1;
	v->a[231557] = anon_sym_DOLLAR;
	v->a[231558] = actions(10940);
	v->a[231559] = 1;
	small_parse_table_11578(v);
}

void	small_parse_table_11578(t_small_parse_table_array *v)
{
	v->a[231560] = anon_sym_DQUOTE;
	v->a[231561] = actions(10944);
	v->a[231562] = 1;
	v->a[231563] = anon_sym_DOLLAR_LBRACE;
	v->a[231564] = actions(10946);
	v->a[231565] = 1;
	v->a[231566] = anon_sym_BQUOTE;
	v->a[231567] = actions(10948);
	v->a[231568] = 1;
	v->a[231569] = anon_sym_DOLLAR_BQUOTE;
	v->a[231570] = actions(10952);
	v->a[231571] = 1;
	v->a[231572] = sym__comment_word;
	v->a[231573] = actions(10932);
	v->a[231574] = 2;
	v->a[231575] = anon_sym_LPAREN_LPAREN;
	v->a[231576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231577] = actions(10938);
	v->a[231578] = 2;
	v->a[231579] = sym_test_operator;
	small_parse_table_11579(v);
}

void	small_parse_table_11579(t_small_parse_table_array *v)
{
	v->a[231580] = sym__special_character;
	v->a[231581] = actions(10950);
	v->a[231582] = 2;
	v->a[231583] = anon_sym_LT_LPAREN;
	v->a[231584] = anon_sym_GT_LPAREN;
	v->a[231585] = actions(10942);
	v->a[231586] = 3;
	v->a[231587] = sym__bare_dollar;
	v->a[231588] = sym_raw_string;
	v->a[231589] = sym_ansi_c_string;
	v->a[231590] = state(1859);
	v->a[231591] = 9;
	v->a[231592] = sym_arithmetic_expansion;
	v->a[231593] = sym_brace_expression;
	v->a[231594] = sym_string;
	v->a[231595] = sym_translated_string;
	v->a[231596] = sym_number;
	v->a[231597] = sym_simple_expansion;
	v->a[231598] = sym_expansion;
	v->a[231599] = sym_command_substitution;
	small_parse_table_11580(v);
}

/* EOF small_parse_table_2315.c */
