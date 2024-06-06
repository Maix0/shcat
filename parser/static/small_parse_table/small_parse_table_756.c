/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_756.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3780(t_small_parse_table_array *v)
{
	v->a[75600] = anon_sym_GT_GT;
	v->a[75601] = anon_sym_AMP_GT_GT;
	v->a[75602] = anon_sym_GT_PIPE;
	v->a[75603] = anon_sym_LT_AMP_DASH;
	v->a[75604] = anon_sym_GT_AMP_DASH;
	v->a[75605] = anon_sym_LT_LT_DASH;
	v->a[75606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75607] = aux_sym_concatenation_token1;
	v->a[75608] = sym__special_character;
	v->a[75609] = anon_sym_DQUOTE;
	v->a[75610] = sym_raw_string;
	v->a[75611] = anon_sym_DOLLAR_LBRACE;
	v->a[75612] = anon_sym_DOLLAR_BQUOTE;
	v->a[75613] = 24;
	v->a[75614] = actions(3);
	v->a[75615] = 1;
	v->a[75616] = sym_comment;
	v->a[75617] = actions(4332);
	v->a[75618] = 1;
	v->a[75619] = anon_sym_LPAREN;
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = actions(4338);
	v->a[75621] = 1;
	v->a[75622] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75623] = actions(4340);
	v->a[75624] = 1;
	v->a[75625] = anon_sym_DOLLAR;
	v->a[75626] = actions(4342);
	v->a[75627] = 1;
	v->a[75628] = sym__special_character;
	v->a[75629] = actions(4344);
	v->a[75630] = 1;
	v->a[75631] = anon_sym_DQUOTE;
	v->a[75632] = actions(4346);
	v->a[75633] = 1;
	v->a[75634] = aux_sym_number_token1;
	v->a[75635] = actions(4348);
	v->a[75636] = 1;
	v->a[75637] = aux_sym_number_token2;
	v->a[75638] = actions(4350);
	v->a[75639] = 1;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = anon_sym_DOLLAR_LBRACE;
	v->a[75641] = actions(4352);
	v->a[75642] = 1;
	v->a[75643] = anon_sym_DOLLAR_LPAREN;
	v->a[75644] = actions(4354);
	v->a[75645] = 1;
	v->a[75646] = anon_sym_BQUOTE;
	v->a[75647] = actions(4356);
	v->a[75648] = 1;
	v->a[75649] = anon_sym_DOLLAR_BQUOTE;
	v->a[75650] = actions(4358);
	v->a[75651] = 1;
	v->a[75652] = sym_test_operator;
	v->a[75653] = actions(4360);
	v->a[75654] = 1;
	v->a[75655] = sym_extglob_pattern;
	v->a[75656] = actions(4362);
	v->a[75657] = 1;
	v->a[75658] = sym__brace_start;
	v->a[75659] = actions(4458);
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = 1;
	v->a[75661] = anon_sym_esac;
	v->a[75662] = actions(4462);
	v->a[75663] = 1;
	v->a[75664] = aux_sym_heredoc_redirect_token1;
	v->a[75665] = state(3393);
	v->a[75666] = 1;
	v->a[75667] = aux_sym__literal_repeat1;
	v->a[75668] = state(3912);
	v->a[75669] = 1;
	v->a[75670] = sym_last_case_item;
	v->a[75671] = actions(4328);
	v->a[75672] = 2;
	v->a[75673] = sym_raw_string;
	v->a[75674] = sym_word;
	v->a[75675] = state(1760);
	v->a[75676] = 2;
	v->a[75677] = sym_case_item;
	v->a[75678] = aux_sym_case_statement_repeat1;
	v->a[75679] = state(3472);
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = 2;
	v->a[75681] = sym_concatenation;
	v->a[75682] = sym__extglob_blob;
	v->a[75683] = actions(4460);
	v->a[75684] = 3;
	v->a[75685] = anon_sym_SEMI_SEMI;
	v->a[75686] = anon_sym_AMP;
	v->a[75687] = anon_sym_SEMI;
	v->a[75688] = state(3295);
	v->a[75689] = 7;
	v->a[75690] = sym_arithmetic_expansion;
	v->a[75691] = sym_brace_expression;
	v->a[75692] = sym_string;
	v->a[75693] = sym_number;
	v->a[75694] = sym_simple_expansion;
	v->a[75695] = sym_expansion;
	v->a[75696] = sym_command_substitution;
	v->a[75697] = 3;
	v->a[75698] = actions(57);
	v->a[75699] = 1;
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
