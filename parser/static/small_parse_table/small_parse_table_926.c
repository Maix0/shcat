/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_926.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4630(t_small_parse_table_array *v)
{
	v->a[92600] = sym_comment;
	v->a[92601] = actions(3380);
	v->a[92602] = 10;
	v->a[92603] = aux_sym_heredoc_redirect_token1;
	v->a[92604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92605] = anon_sym_DOLLAR;
	v->a[92606] = anon_sym_DQUOTE;
	v->a[92607] = sym_raw_string;
	v->a[92608] = sym_number;
	v->a[92609] = anon_sym_DOLLAR_LBRACE;
	v->a[92610] = anon_sym_DOLLAR_LPAREN;
	v->a[92611] = anon_sym_BQUOTE;
	v->a[92612] = sym_word;
	v->a[92613] = 8;
	v->a[92614] = actions(3);
	v->a[92615] = 1;
	v->a[92616] = sym_comment;
	v->a[92617] = actions(3905);
	v->a[92618] = 1;
	v->a[92619] = anon_sym_in;
	small_parse_table_4631(v);
}

void	small_parse_table_4631(t_small_parse_table_array *v)
{
	v->a[92620] = actions(3907);
	v->a[92621] = 1;
	v->a[92622] = aux_sym_heredoc_redirect_token1;
	v->a[92623] = actions(3909);
	v->a[92624] = 1;
	v->a[92625] = aux_sym_concatenation_token1;
	v->a[92626] = actions(3911);
	v->a[92627] = 1;
	v->a[92628] = sym__concat;
	v->a[92629] = state(1962);
	v->a[92630] = 1;
	v->a[92631] = aux_sym_concatenation_repeat1;
	v->a[92632] = state(2176);
	v->a[92633] = 1;
	v->a[92634] = sym_terminator;
	v->a[92635] = actions(2481);
	v->a[92636] = 3;
	v->a[92637] = anon_sym_SEMI_SEMI;
	v->a[92638] = anon_sym_AMP;
	v->a[92639] = anon_sym_SEMI;
	small_parse_table_4632(v);
}

void	small_parse_table_4632(t_small_parse_table_array *v)
{
	v->a[92640] = 7;
	v->a[92641] = actions(1074);
	v->a[92642] = 1;
	v->a[92643] = sym_comment;
	v->a[92644] = actions(3915);
	v->a[92645] = 1;
	v->a[92646] = anon_sym_DQUOTE;
	v->a[92647] = actions(3917);
	v->a[92648] = 1;
	v->a[92649] = anon_sym_DOLLAR_LBRACE;
	v->a[92650] = actions(3919);
	v->a[92651] = 1;
	v->a[92652] = anon_sym_DOLLAR_LPAREN;
	v->a[92653] = actions(3921);
	v->a[92654] = 1;
	v->a[92655] = anon_sym_BQUOTE;
	v->a[92656] = actions(3913);
	v->a[92657] = 2;
	v->a[92658] = anon_sym_PIPE;
	v->a[92659] = anon_sym_RPAREN;
	small_parse_table_4633(v);
}

void	small_parse_table_4633(t_small_parse_table_array *v)
{
	v->a[92660] = state(2081);
	v->a[92661] = 3;
	v->a[92662] = sym_string;
	v->a[92663] = sym_expansion;
	v->a[92664] = sym_command_substitution;
	v->a[92665] = 8;
	v->a[92666] = actions(3);
	v->a[92667] = 1;
	v->a[92668] = sym_comment;
	v->a[92669] = actions(3907);
	v->a[92670] = 1;
	v->a[92671] = aux_sym_heredoc_redirect_token1;
	v->a[92672] = actions(3909);
	v->a[92673] = 1;
	v->a[92674] = aux_sym_concatenation_token1;
	v->a[92675] = actions(3911);
	v->a[92676] = 1;
	v->a[92677] = sym__concat;
	v->a[92678] = actions(3923);
	v->a[92679] = 1;
	small_parse_table_4634(v);
}

void	small_parse_table_4634(t_small_parse_table_array *v)
{
	v->a[92680] = anon_sym_in;
	v->a[92681] = state(1962);
	v->a[92682] = 1;
	v->a[92683] = aux_sym_concatenation_repeat1;
	v->a[92684] = state(2132);
	v->a[92685] = 1;
	v->a[92686] = sym_terminator;
	v->a[92687] = actions(2481);
	v->a[92688] = 3;
	v->a[92689] = anon_sym_SEMI_SEMI;
	v->a[92690] = anon_sym_AMP;
	v->a[92691] = anon_sym_SEMI;
	v->a[92692] = 8;
	v->a[92693] = actions(3);
	v->a[92694] = 1;
	v->a[92695] = sym_comment;
	v->a[92696] = actions(3907);
	v->a[92697] = 1;
	v->a[92698] = aux_sym_heredoc_redirect_token1;
	v->a[92699] = actions(3909);
	small_parse_table_4635(v);
}

/* EOF small_parse_table_926.c */
