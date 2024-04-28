/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_236.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1180(t_small_parse_table_array *v)
{
	v->a[23600] = anon_sym_DOLLAR_LBRACK;
	v->a[23601] = actions(2263);
	v->a[23602] = 1;
	v->a[23603] = anon_sym_DOLLAR;
	v->a[23604] = actions(2267);
	v->a[23605] = 1;
	v->a[23606] = anon_sym_DQUOTE;
	v->a[23607] = actions(2269);
	v->a[23608] = 1;
	v->a[23609] = aux_sym_number_token1;
	v->a[23610] = actions(2271);
	v->a[23611] = 1;
	v->a[23612] = aux_sym_number_token2;
	v->a[23613] = actions(2273);
	v->a[23614] = 1;
	v->a[23615] = anon_sym_DOLLAR_LBRACE;
	v->a[23616] = actions(2275);
	v->a[23617] = 1;
	v->a[23618] = anon_sym_DOLLAR_LPAREN;
	v->a[23619] = actions(2277);
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = 1;
	v->a[23621] = anon_sym_BQUOTE;
	v->a[23622] = actions(2279);
	v->a[23623] = 1;
	v->a[23624] = anon_sym_DOLLAR_BQUOTE;
	v->a[23625] = actions(2289);
	v->a[23626] = 1;
	v->a[23627] = sym__brace_start;
	v->a[23628] = actions(3970);
	v->a[23629] = 1;
	v->a[23630] = sym__special_character;
	v->a[23631] = actions(3974);
	v->a[23632] = 1;
	v->a[23633] = sym_variable_name;
	v->a[23634] = actions(3976);
	v->a[23635] = 1;
	v->a[23636] = sym_test_operator;
	v->a[23637] = actions(4066);
	v->a[23638] = 1;
	v->a[23639] = aux_sym__simple_variable_name_token1;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = state(1743);
	v->a[23641] = 1;
	v->a[23642] = aux_sym__literal_repeat1;
	v->a[23643] = state(6739);
	v->a[23644] = 1;
	v->a[23645] = sym_subscript;
	v->a[23646] = actions(1799);
	v->a[23647] = 2;
	v->a[23648] = sym_file_descriptor;
	v->a[23649] = aux_sym_heredoc_redirect_token1;
	v->a[23650] = actions(2259);
	v->a[23651] = 2;
	v->a[23652] = anon_sym_LPAREN_LPAREN;
	v->a[23653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23654] = actions(2281);
	v->a[23655] = 2;
	v->a[23656] = anon_sym_LT_LPAREN;
	v->a[23657] = anon_sym_GT_LPAREN;
	v->a[23658] = actions(3968);
	v->a[23659] = 3;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = sym_raw_string;
	v->a[23661] = sym_ansi_c_string;
	v->a[23662] = sym_word;
	v->a[23663] = state(746);
	v->a[23664] = 3;
	v->a[23665] = sym_variable_assignment;
	v->a[23666] = sym_concatenation;
	v->a[23667] = aux_sym_declaration_command_repeat1;
	v->a[23668] = state(2330);
	v->a[23669] = 9;
	v->a[23670] = sym_arithmetic_expansion;
	v->a[23671] = sym_brace_expression;
	v->a[23672] = sym_string;
	v->a[23673] = sym_translated_string;
	v->a[23674] = sym_number;
	v->a[23675] = sym_simple_expansion;
	v->a[23676] = sym_expansion;
	v->a[23677] = sym_command_substitution;
	v->a[23678] = sym_process_substitution;
	v->a[23679] = actions(1797);
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = 16;
	v->a[23681] = anon_sym_PIPE_PIPE;
	v->a[23682] = anon_sym_AMP_AMP;
	v->a[23683] = anon_sym_PIPE;
	v->a[23684] = anon_sym_LT;
	v->a[23685] = anon_sym_GT;
	v->a[23686] = anon_sym_LT_LT;
	v->a[23687] = anon_sym_GT_GT;
	v->a[23688] = anon_sym_PIPE_AMP;
	v->a[23689] = anon_sym_AMP_GT;
	v->a[23690] = anon_sym_AMP_GT_GT;
	v->a[23691] = anon_sym_LT_AMP;
	v->a[23692] = anon_sym_GT_AMP;
	v->a[23693] = anon_sym_GT_PIPE;
	v->a[23694] = anon_sym_LT_AMP_DASH;
	v->a[23695] = anon_sym_GT_AMP_DASH;
	v->a[23696] = anon_sym_LT_LT_DASH;
	v->a[23697] = 20;
	v->a[23698] = actions(3);
	v->a[23699] = 1;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
