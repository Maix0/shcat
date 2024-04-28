/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2116.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10580(t_small_parse_table_array *v)
{
	v->a[211600] = anon_sym_LT_LPAREN;
	v->a[211601] = anon_sym_GT_LPAREN;
	v->a[211602] = actions(10040);
	v->a[211603] = 2;
	v->a[211604] = sym_raw_string;
	v->a[211605] = sym_ansi_c_string;
	v->a[211606] = state(1258);
	v->a[211607] = 9;
	v->a[211608] = sym_arithmetic_expansion;
	v->a[211609] = sym_brace_expression;
	v->a[211610] = sym_string;
	v->a[211611] = sym_translated_string;
	v->a[211612] = sym_number;
	v->a[211613] = sym_simple_expansion;
	v->a[211614] = sym_expansion;
	v->a[211615] = sym_command_substitution;
	v->a[211616] = sym_process_substitution;
	v->a[211617] = 18;
	v->a[211618] = actions(3);
	v->a[211619] = 1;
	small_parse_table_10581(v);
}

void	small_parse_table_10581(t_small_parse_table_array *v)
{
	v->a[211620] = sym_comment;
	v->a[211621] = actions(3731);
	v->a[211622] = 1;
	v->a[211623] = anon_sym_DOLLAR;
	v->a[211624] = actions(3737);
	v->a[211625] = 1;
	v->a[211626] = aux_sym_number_token1;
	v->a[211627] = actions(3739);
	v->a[211628] = 1;
	v->a[211629] = aux_sym_number_token2;
	v->a[211630] = actions(3743);
	v->a[211631] = 1;
	v->a[211632] = anon_sym_DOLLAR_LPAREN;
	v->a[211633] = actions(3755);
	v->a[211634] = 1;
	v->a[211635] = sym__brace_start;
	v->a[211636] = actions(8820);
	v->a[211637] = 1;
	v->a[211638] = anon_sym_DOLLAR_LBRACK;
	v->a[211639] = actions(8824);
	small_parse_table_10582(v);
}

void	small_parse_table_10582(t_small_parse_table_array *v)
{
	v->a[211640] = 1;
	v->a[211641] = anon_sym_DQUOTE;
	v->a[211642] = actions(8828);
	v->a[211643] = 1;
	v->a[211644] = anon_sym_DOLLAR_LBRACE;
	v->a[211645] = actions(8830);
	v->a[211646] = 1;
	v->a[211647] = anon_sym_BQUOTE;
	v->a[211648] = actions(8832);
	v->a[211649] = 1;
	v->a[211650] = anon_sym_DOLLAR_BQUOTE;
	v->a[211651] = actions(9412);
	v->a[211652] = 1;
	v->a[211653] = sym_word;
	v->a[211654] = actions(9420);
	v->a[211655] = 1;
	v->a[211656] = sym__comment_word;
	v->a[211657] = actions(8818);
	v->a[211658] = 2;
	v->a[211659] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10583(v);
}

void	small_parse_table_10583(t_small_parse_table_array *v)
{
	v->a[211660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211661] = actions(8834);
	v->a[211662] = 2;
	v->a[211663] = anon_sym_LT_LPAREN;
	v->a[211664] = anon_sym_GT_LPAREN;
	v->a[211665] = actions(9416);
	v->a[211666] = 2;
	v->a[211667] = sym_test_operator;
	v->a[211668] = sym__special_character;
	v->a[211669] = actions(9418);
	v->a[211670] = 3;
	v->a[211671] = sym__bare_dollar;
	v->a[211672] = sym_raw_string;
	v->a[211673] = sym_ansi_c_string;
	v->a[211674] = state(4810);
	v->a[211675] = 9;
	v->a[211676] = sym_arithmetic_expansion;
	v->a[211677] = sym_brace_expression;
	v->a[211678] = sym_string;
	v->a[211679] = sym_translated_string;
	small_parse_table_10584(v);
}

void	small_parse_table_10584(t_small_parse_table_array *v)
{
	v->a[211680] = sym_number;
	v->a[211681] = sym_simple_expansion;
	v->a[211682] = sym_expansion;
	v->a[211683] = sym_command_substitution;
	v->a[211684] = sym_process_substitution;
	v->a[211685] = 21;
	v->a[211686] = actions(71);
	v->a[211687] = 1;
	v->a[211688] = sym_comment;
	v->a[211689] = actions(3064);
	v->a[211690] = 1;
	v->a[211691] = sym_variable_name;
	v->a[211692] = actions(9278);
	v->a[211693] = 1;
	v->a[211694] = anon_sym_LPAREN;
	v->a[211695] = actions(9280);
	v->a[211696] = 1;
	v->a[211697] = anon_sym_BANG;
	v->a[211698] = actions(9286);
	v->a[211699] = 1;
	small_parse_table_10585(v);
}

/* EOF small_parse_table_2116.c */
