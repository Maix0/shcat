/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1236.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6180(t_small_parse_table_array *v)
{
	v->a[123600] = anon_sym_GT_AMP_DASH;
	v->a[123601] = anon_sym_LT_LT_DASH;
	v->a[123602] = anon_sym_LT_LT_LT;
	v->a[123603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123604] = anon_sym_DOLLAR_LBRACK;
	v->a[123605] = sym__special_character;
	v->a[123606] = anon_sym_DQUOTE;
	v->a[123607] = sym_raw_string;
	v->a[123608] = sym_ansi_c_string;
	v->a[123609] = anon_sym_DOLLAR_LBRACE;
	v->a[123610] = anon_sym_DOLLAR_BQUOTE;
	v->a[123611] = anon_sym_LT_LPAREN;
	v->a[123612] = anon_sym_GT_LPAREN;
	v->a[123613] = 26;
	v->a[123614] = actions(3);
	v->a[123615] = 1;
	v->a[123616] = sym_comment;
	v->a[123617] = actions(6480);
	v->a[123618] = 1;
	v->a[123619] = anon_sym_LPAREN;
	small_parse_table_6181(v);
}

void	small_parse_table_6181(t_small_parse_table_array *v)
{
	v->a[123620] = actions(6486);
	v->a[123621] = 1;
	v->a[123622] = anon_sym_DOLLAR_LBRACK;
	v->a[123623] = actions(6488);
	v->a[123624] = 1;
	v->a[123625] = anon_sym_DOLLAR;
	v->a[123626] = actions(6490);
	v->a[123627] = 1;
	v->a[123628] = sym__special_character;
	v->a[123629] = actions(6492);
	v->a[123630] = 1;
	v->a[123631] = anon_sym_DQUOTE;
	v->a[123632] = actions(6494);
	v->a[123633] = 1;
	v->a[123634] = aux_sym_number_token1;
	v->a[123635] = actions(6496);
	v->a[123636] = 1;
	v->a[123637] = aux_sym_number_token2;
	v->a[123638] = actions(6498);
	v->a[123639] = 1;
	small_parse_table_6182(v);
}

void	small_parse_table_6182(t_small_parse_table_array *v)
{
	v->a[123640] = anon_sym_DOLLAR_LBRACE;
	v->a[123641] = actions(6500);
	v->a[123642] = 1;
	v->a[123643] = anon_sym_DOLLAR_LPAREN;
	v->a[123644] = actions(6502);
	v->a[123645] = 1;
	v->a[123646] = anon_sym_BQUOTE;
	v->a[123647] = actions(6504);
	v->a[123648] = 1;
	v->a[123649] = anon_sym_DOLLAR_BQUOTE;
	v->a[123650] = actions(6508);
	v->a[123651] = 1;
	v->a[123652] = sym_test_operator;
	v->a[123653] = actions(6510);
	v->a[123654] = 1;
	v->a[123655] = sym_extglob_pattern;
	v->a[123656] = actions(6512);
	v->a[123657] = 1;
	v->a[123658] = sym__brace_start;
	v->a[123659] = actions(6539);
	small_parse_table_6183(v);
}

void	small_parse_table_6183(t_small_parse_table_array *v)
{
	v->a[123660] = 1;
	v->a[123661] = anon_sym_esac;
	v->a[123662] = actions(6541);
	v->a[123663] = 1;
	v->a[123664] = aux_sym_heredoc_redirect_token1;
	v->a[123665] = state(6426);
	v->a[123666] = 1;
	v->a[123667] = aux_sym__literal_repeat1;
	v->a[123668] = state(7275);
	v->a[123669] = 1;
	v->a[123670] = sym_last_case_item;
	v->a[123671] = actions(6476);
	v->a[123672] = 2;
	v->a[123673] = anon_sym_LPAREN_LPAREN;
	v->a[123674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123675] = actions(6506);
	v->a[123676] = 2;
	v->a[123677] = anon_sym_LT_LPAREN;
	v->a[123678] = anon_sym_GT_LPAREN;
	v->a[123679] = state(3452);
	small_parse_table_6184(v);
}

void	small_parse_table_6184(t_small_parse_table_array *v)
{
	v->a[123680] = 2;
	v->a[123681] = sym_case_item;
	v->a[123682] = aux_sym_case_statement_repeat1;
	v->a[123683] = state(6695);
	v->a[123684] = 2;
	v->a[123685] = sym_concatenation;
	v->a[123686] = sym__extglob_blob;
	v->a[123687] = actions(6474);
	v->a[123688] = 3;
	v->a[123689] = sym_raw_string;
	v->a[123690] = sym_ansi_c_string;
	v->a[123691] = sym_word;
	v->a[123692] = actions(6537);
	v->a[123693] = 3;
	v->a[123694] = anon_sym_SEMI;
	v->a[123695] = anon_sym_AMP;
	v->a[123696] = anon_sym_SEMI_SEMI;
	v->a[123697] = state(6303);
	v->a[123698] = 9;
	v->a[123699] = sym_arithmetic_expansion;
	small_parse_table_6185(v);
}

/* EOF small_parse_table_1236.c */
