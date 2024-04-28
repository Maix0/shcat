/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2076.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10380(t_small_parse_table_array *v)
{
	v->a[207600] = sym_comment;
	v->a[207601] = actions(3185);
	v->a[207602] = 1;
	v->a[207603] = anon_sym_DOLLAR;
	v->a[207604] = actions(3191);
	v->a[207605] = 1;
	v->a[207606] = aux_sym_number_token1;
	v->a[207607] = actions(3193);
	v->a[207608] = 1;
	v->a[207609] = aux_sym_number_token2;
	v->a[207610] = actions(3197);
	v->a[207611] = 1;
	v->a[207612] = anon_sym_DOLLAR_LPAREN;
	v->a[207613] = actions(3209);
	v->a[207614] = 1;
	v->a[207615] = sym__brace_start;
	v->a[207616] = actions(9674);
	v->a[207617] = 1;
	v->a[207618] = sym_word;
	v->a[207619] = actions(9678);
	small_parse_table_10381(v);
}

void	small_parse_table_10381(t_small_parse_table_array *v)
{
	v->a[207620] = 1;
	v->a[207621] = anon_sym_DOLLAR_LBRACK;
	v->a[207622] = actions(9682);
	v->a[207623] = 1;
	v->a[207624] = anon_sym_DQUOTE;
	v->a[207625] = actions(9686);
	v->a[207626] = 1;
	v->a[207627] = anon_sym_DOLLAR_LBRACE;
	v->a[207628] = actions(9688);
	v->a[207629] = 1;
	v->a[207630] = anon_sym_BQUOTE;
	v->a[207631] = actions(9690);
	v->a[207632] = 1;
	v->a[207633] = anon_sym_DOLLAR_BQUOTE;
	v->a[207634] = actions(9694);
	v->a[207635] = 1;
	v->a[207636] = sym__comment_word;
	v->a[207637] = actions(9676);
	v->a[207638] = 2;
	v->a[207639] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10382(v);
}

void	small_parse_table_10382(t_small_parse_table_array *v)
{
	v->a[207640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207641] = actions(9680);
	v->a[207642] = 2;
	v->a[207643] = sym_test_operator;
	v->a[207644] = sym__special_character;
	v->a[207645] = actions(9692);
	v->a[207646] = 2;
	v->a[207647] = anon_sym_LT_LPAREN;
	v->a[207648] = anon_sym_GT_LPAREN;
	v->a[207649] = actions(9684);
	v->a[207650] = 3;
	v->a[207651] = sym__bare_dollar;
	v->a[207652] = sym_raw_string;
	v->a[207653] = sym_ansi_c_string;
	v->a[207654] = state(1733);
	v->a[207655] = 9;
	v->a[207656] = sym_arithmetic_expansion;
	v->a[207657] = sym_brace_expression;
	v->a[207658] = sym_string;
	v->a[207659] = sym_translated_string;
	small_parse_table_10383(v);
}

void	small_parse_table_10383(t_small_parse_table_array *v)
{
	v->a[207660] = sym_number;
	v->a[207661] = sym_simple_expansion;
	v->a[207662] = sym_expansion;
	v->a[207663] = sym_command_substitution;
	v->a[207664] = sym_process_substitution;
	v->a[207665] = 18;
	v->a[207666] = actions(3);
	v->a[207667] = 1;
	v->a[207668] = sym_comment;
	v->a[207669] = actions(3401);
	v->a[207670] = 1;
	v->a[207671] = aux_sym_number_token1;
	v->a[207672] = actions(3403);
	v->a[207673] = 1;
	v->a[207674] = aux_sym_number_token2;
	v->a[207675] = actions(3407);
	v->a[207676] = 1;
	v->a[207677] = anon_sym_DOLLAR_LPAREN;
	v->a[207678] = actions(3417);
	v->a[207679] = 1;
	small_parse_table_10384(v);
}

void	small_parse_table_10384(t_small_parse_table_array *v)
{
	v->a[207680] = sym__brace_start;
	v->a[207681] = actions(8926);
	v->a[207682] = 1;
	v->a[207683] = anon_sym_DOLLAR_LBRACK;
	v->a[207684] = actions(8930);
	v->a[207685] = 1;
	v->a[207686] = anon_sym_DQUOTE;
	v->a[207687] = actions(8934);
	v->a[207688] = 1;
	v->a[207689] = anon_sym_DOLLAR_LBRACE;
	v->a[207690] = actions(8936);
	v->a[207691] = 1;
	v->a[207692] = anon_sym_BQUOTE;
	v->a[207693] = actions(8938);
	v->a[207694] = 1;
	v->a[207695] = anon_sym_DOLLAR_BQUOTE;
	v->a[207696] = actions(9696);
	v->a[207697] = 1;
	v->a[207698] = sym_word;
	v->a[207699] = actions(9698);
	small_parse_table_10385(v);
}

/* EOF small_parse_table_2076.c */
