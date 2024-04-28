/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1246.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6230(t_small_parse_table_array *v)
{
	v->a[124600] = anon_sym_RBRACK;
	v->a[124601] = anon_sym_AMP_GT_GT;
	v->a[124602] = anon_sym_GT_PIPE;
	v->a[124603] = anon_sym_LT_AMP_DASH;
	v->a[124604] = anon_sym_GT_AMP_DASH;
	v->a[124605] = anon_sym_LT_LT_DASH;
	v->a[124606] = anon_sym_LT_LT_LT;
	v->a[124607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124608] = anon_sym_DOLLAR_LBRACK;
	v->a[124609] = aux_sym_concatenation_token1;
	v->a[124610] = anon_sym_DQUOTE;
	v->a[124611] = sym_raw_string;
	v->a[124612] = sym_ansi_c_string;
	v->a[124613] = anon_sym_DOLLAR_LBRACE;
	v->a[124614] = anon_sym_DOLLAR_BQUOTE;
	v->a[124615] = anon_sym_LT_LPAREN;
	v->a[124616] = anon_sym_GT_LPAREN;
	v->a[124617] = 26;
	v->a[124618] = actions(3);
	v->a[124619] = 1;
	small_parse_table_6231(v);
}

void	small_parse_table_6231(t_small_parse_table_array *v)
{
	v->a[124620] = sym_comment;
	v->a[124621] = actions(6480);
	v->a[124622] = 1;
	v->a[124623] = anon_sym_LPAREN;
	v->a[124624] = actions(6486);
	v->a[124625] = 1;
	v->a[124626] = anon_sym_DOLLAR_LBRACK;
	v->a[124627] = actions(6488);
	v->a[124628] = 1;
	v->a[124629] = anon_sym_DOLLAR;
	v->a[124630] = actions(6490);
	v->a[124631] = 1;
	v->a[124632] = sym__special_character;
	v->a[124633] = actions(6492);
	v->a[124634] = 1;
	v->a[124635] = anon_sym_DQUOTE;
	v->a[124636] = actions(6494);
	v->a[124637] = 1;
	v->a[124638] = aux_sym_number_token1;
	v->a[124639] = actions(6496);
	small_parse_table_6232(v);
}

void	small_parse_table_6232(t_small_parse_table_array *v)
{
	v->a[124640] = 1;
	v->a[124641] = aux_sym_number_token2;
	v->a[124642] = actions(6498);
	v->a[124643] = 1;
	v->a[124644] = anon_sym_DOLLAR_LBRACE;
	v->a[124645] = actions(6500);
	v->a[124646] = 1;
	v->a[124647] = anon_sym_DOLLAR_LPAREN;
	v->a[124648] = actions(6502);
	v->a[124649] = 1;
	v->a[124650] = anon_sym_BQUOTE;
	v->a[124651] = actions(6504);
	v->a[124652] = 1;
	v->a[124653] = anon_sym_DOLLAR_BQUOTE;
	v->a[124654] = actions(6508);
	v->a[124655] = 1;
	v->a[124656] = sym_test_operator;
	v->a[124657] = actions(6510);
	v->a[124658] = 1;
	v->a[124659] = sym_extglob_pattern;
	small_parse_table_6233(v);
}

void	small_parse_table_6233(t_small_parse_table_array *v)
{
	v->a[124660] = actions(6512);
	v->a[124661] = 1;
	v->a[124662] = sym__brace_start;
	v->a[124663] = actions(6568);
	v->a[124664] = 1;
	v->a[124665] = anon_sym_esac;
	v->a[124666] = actions(6570);
	v->a[124667] = 1;
	v->a[124668] = aux_sym_heredoc_redirect_token1;
	v->a[124669] = state(6426);
	v->a[124670] = 1;
	v->a[124671] = aux_sym__literal_repeat1;
	v->a[124672] = state(6997);
	v->a[124673] = 1;
	v->a[124674] = sym_last_case_item;
	v->a[124675] = actions(6476);
	v->a[124676] = 2;
	v->a[124677] = anon_sym_LPAREN_LPAREN;
	v->a[124678] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124679] = actions(6506);
	small_parse_table_6234(v);
}

void	small_parse_table_6234(t_small_parse_table_array *v)
{
	v->a[124680] = 2;
	v->a[124681] = anon_sym_LT_LPAREN;
	v->a[124682] = anon_sym_GT_LPAREN;
	v->a[124683] = state(3383);
	v->a[124684] = 2;
	v->a[124685] = sym_case_item;
	v->a[124686] = aux_sym_case_statement_repeat1;
	v->a[124687] = state(6695);
	v->a[124688] = 2;
	v->a[124689] = sym_concatenation;
	v->a[124690] = sym__extglob_blob;
	v->a[124691] = actions(6474);
	v->a[124692] = 3;
	v->a[124693] = sym_raw_string;
	v->a[124694] = sym_ansi_c_string;
	v->a[124695] = sym_word;
	v->a[124696] = actions(6566);
	v->a[124697] = 3;
	v->a[124698] = anon_sym_SEMI;
	v->a[124699] = anon_sym_AMP;
	small_parse_table_6235(v);
}

/* EOF small_parse_table_1246.c */
