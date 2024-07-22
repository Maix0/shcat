/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_786.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3930(t_small_parse_table_array *v)
{
	v->a[78600] = anon_sym_LPAREN;
	v->a[78601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78602] = anon_sym_DOLLAR;
	v->a[78603] = anon_sym_DQUOTE;
	v->a[78604] = sym_raw_string;
	v->a[78605] = sym_number;
	v->a[78606] = anon_sym_DOLLAR_LBRACE;
	v->a[78607] = anon_sym_DOLLAR_LPAREN;
	v->a[78608] = anon_sym_BQUOTE;
	v->a[78609] = sym_word;
	v->a[78610] = 2;
	v->a[78611] = actions(3);
	v->a[78612] = 1;
	v->a[78613] = sym_comment;
	v->a[78614] = actions(2930);
	v->a[78615] = 10;
	v->a[78616] = aux_sym_heredoc_redirect_token1;
	v->a[78617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78618] = anon_sym_DOLLAR;
	v->a[78619] = anon_sym_DQUOTE;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = sym_raw_string;
	v->a[78621] = sym_number;
	v->a[78622] = anon_sym_DOLLAR_LBRACE;
	v->a[78623] = anon_sym_DOLLAR_LPAREN;
	v->a[78624] = anon_sym_BQUOTE;
	v->a[78625] = sym_word;
	v->a[78626] = 8;
	v->a[78627] = actions(501);
	v->a[78628] = 1;
	v->a[78629] = sym_comment;
	v->a[78630] = actions(3428);
	v->a[78631] = 1;
	v->a[78632] = anon_sym_DOLLAR;
	v->a[78633] = actions(3430);
	v->a[78634] = 1;
	v->a[78635] = anon_sym_DOLLAR_LBRACE;
	v->a[78636] = actions(3432);
	v->a[78637] = 1;
	v->a[78638] = anon_sym_DOLLAR_LPAREN;
	v->a[78639] = actions(3434);
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = 1;
	v->a[78641] = anon_sym_BQUOTE;
	v->a[78642] = actions(3436);
	v->a[78643] = 1;
	v->a[78644] = sym_heredoc_content;
	v->a[78645] = actions(3438);
	v->a[78646] = 1;
	v->a[78647] = sym_heredoc_end;
	v->a[78648] = state(1725);
	v->a[78649] = 4;
	v->a[78650] = sym_simple_expansion;
	v->a[78651] = sym_expansion;
	v->a[78652] = sym_command_substitution;
	v->a[78653] = aux_sym_heredoc_body_repeat1;
	v->a[78654] = 8;
	v->a[78655] = actions(501);
	v->a[78656] = 1;
	v->a[78657] = sym_comment;
	v->a[78658] = actions(3440);
	v->a[78659] = 1;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = anon_sym_DOLLAR;
	v->a[78661] = actions(3443);
	v->a[78662] = 1;
	v->a[78663] = anon_sym_DOLLAR_LBRACE;
	v->a[78664] = actions(3446);
	v->a[78665] = 1;
	v->a[78666] = anon_sym_DOLLAR_LPAREN;
	v->a[78667] = actions(3449);
	v->a[78668] = 1;
	v->a[78669] = anon_sym_BQUOTE;
	v->a[78670] = actions(3452);
	v->a[78671] = 1;
	v->a[78672] = sym_heredoc_content;
	v->a[78673] = actions(3455);
	v->a[78674] = 1;
	v->a[78675] = sym_heredoc_end;
	v->a[78676] = state(1724);
	v->a[78677] = 4;
	v->a[78678] = sym_simple_expansion;
	v->a[78679] = sym_expansion;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = sym_command_substitution;
	v->a[78681] = aux_sym_heredoc_body_repeat1;
	v->a[78682] = 8;
	v->a[78683] = actions(501);
	v->a[78684] = 1;
	v->a[78685] = sym_comment;
	v->a[78686] = actions(3428);
	v->a[78687] = 1;
	v->a[78688] = anon_sym_DOLLAR;
	v->a[78689] = actions(3430);
	v->a[78690] = 1;
	v->a[78691] = anon_sym_DOLLAR_LBRACE;
	v->a[78692] = actions(3432);
	v->a[78693] = 1;
	v->a[78694] = anon_sym_DOLLAR_LPAREN;
	v->a[78695] = actions(3434);
	v->a[78696] = 1;
	v->a[78697] = anon_sym_BQUOTE;
	v->a[78698] = actions(3457);
	v->a[78699] = 1;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
