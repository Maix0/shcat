/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_166.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_830(t_small_parse_table_array *v)
{
	v->a[16600] = sym_concatenation;
	v->a[16601] = aux_sym_for_statement_repeat1;
	v->a[16602] = actions(478);
	v->a[16603] = 3;
	v->a[16604] = sym_raw_string;
	v->a[16605] = sym_number;
	v->a[16606] = sym_word;
	v->a[16607] = state(258);
	v->a[16608] = 5;
	v->a[16609] = sym_arithmetic_expansion;
	v->a[16610] = sym_string;
	v->a[16611] = sym_simple_expansion;
	v->a[16612] = sym_expansion;
	v->a[16613] = sym_command_substitution;
	v->a[16614] = actions(428);
	v->a[16615] = 10;
	v->a[16616] = anon_sym_PIPE;
	v->a[16617] = anon_sym_SEMI_SEMI;
	v->a[16618] = anon_sym_AMP_AMP;
	v->a[16619] = anon_sym_PIPE_PIPE;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = anon_sym_LT;
	v->a[16621] = anon_sym_GT;
	v->a[16622] = anon_sym_GT_GT;
	v->a[16623] = anon_sym_LT_LT;
	v->a[16624] = aux_sym_heredoc_redirect_token1;
	v->a[16625] = anon_sym_SEMI;
	v->a[16626] = 14;
	v->a[16627] = actions(3);
	v->a[16628] = 1;
	v->a[16629] = sym_comment;
	v->a[16630] = actions(25);
	v->a[16631] = 1;
	v->a[16632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16633] = actions(27);
	v->a[16634] = 1;
	v->a[16635] = anon_sym_DOLLAR;
	v->a[16636] = actions(29);
	v->a[16637] = 1;
	v->a[16638] = anon_sym_DQUOTE;
	v->a[16639] = actions(33);
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = 1;
	v->a[16641] = anon_sym_DOLLAR_LBRACE;
	v->a[16642] = actions(35);
	v->a[16643] = 1;
	v->a[16644] = anon_sym_DOLLAR_LPAREN;
	v->a[16645] = actions(37);
	v->a[16646] = 1;
	v->a[16647] = anon_sym_BQUOTE;
	v->a[16648] = actions(413);
	v->a[16649] = 1;
	v->a[16650] = sym__bare_dollar;
	v->a[16651] = actions(499);
	v->a[16652] = 1;
	v->a[16653] = ts_builtin_sym_end;
	v->a[16654] = state(157);
	v->a[16655] = 1;
	v->a[16656] = aux_sym_command_repeat2;
	v->a[16657] = state(564);
	v->a[16658] = 1;
	v->a[16659] = sym_concatenation;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = actions(409);
	v->a[16661] = 3;
	v->a[16662] = sym_raw_string;
	v->a[16663] = sym_number;
	v->a[16664] = sym_word;
	v->a[16665] = state(273);
	v->a[16666] = 5;
	v->a[16667] = sym_arithmetic_expansion;
	v->a[16668] = sym_string;
	v->a[16669] = sym_simple_expansion;
	v->a[16670] = sym_expansion;
	v->a[16671] = sym_command_substitution;
	v->a[16672] = actions(417);
	v->a[16673] = 10;
	v->a[16674] = anon_sym_PIPE;
	v->a[16675] = anon_sym_SEMI_SEMI;
	v->a[16676] = anon_sym_AMP_AMP;
	v->a[16677] = anon_sym_PIPE_PIPE;
	v->a[16678] = anon_sym_LT;
	v->a[16679] = anon_sym_GT;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = anon_sym_GT_GT;
	v->a[16681] = anon_sym_LT_LT;
	v->a[16682] = aux_sym_heredoc_redirect_token1;
	v->a[16683] = anon_sym_SEMI;
	v->a[16684] = 14;
	v->a[16685] = actions(3);
	v->a[16686] = 1;
	v->a[16687] = sym_comment;
	v->a[16688] = actions(501);
	v->a[16689] = 1;
	v->a[16690] = ts_builtin_sym_end;
	v->a[16691] = actions(506);
	v->a[16692] = 1;
	v->a[16693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16694] = actions(509);
	v->a[16695] = 1;
	v->a[16696] = anon_sym_DOLLAR;
	v->a[16697] = actions(512);
	v->a[16698] = 1;
	v->a[16699] = anon_sym_DQUOTE;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
