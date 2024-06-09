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
	v->a[92600] = anon_sym_DOLLAR_LPAREN;
	v->a[92601] = actions(4286);
	v->a[92602] = 1;
	v->a[92603] = anon_sym_BQUOTE;
	v->a[92604] = state(880);
	v->a[92605] = 2;
	v->a[92606] = sym_expansion;
	v->a[92607] = sym_command_substitution;
	v->a[92608] = 6;
	v->a[92609] = actions(1404);
	v->a[92610] = 1;
	v->a[92611] = sym_comment;
	v->a[92612] = actions(4206);
	v->a[92613] = 1;
	v->a[92614] = sym_simple_heredoc_body;
	v->a[92615] = actions(4208);
	v->a[92616] = 1;
	v->a[92617] = sym__heredoc_body_beginning;
	v->a[92618] = state(1134);
	v->a[92619] = 1;
	small_parse_table_4631(v);
}

void	small_parse_table_4631(t_small_parse_table_array *v)
{
	v->a[92620] = sym__heredoc_body;
	v->a[92621] = state(1136);
	v->a[92622] = 1;
	v->a[92623] = sym__simple_heredoc_body;
	v->a[92624] = state(2151);
	v->a[92625] = 1;
	v->a[92626] = sym_heredoc_body;
	v->a[92627] = 5;
	v->a[92628] = actions(1404);
	v->a[92629] = 1;
	v->a[92630] = sym_comment;
	v->a[92631] = actions(4206);
	v->a[92632] = 1;
	v->a[92633] = sym_simple_heredoc_body;
	v->a[92634] = actions(4208);
	v->a[92635] = 1;
	v->a[92636] = sym__heredoc_body_beginning;
	v->a[92637] = state(2151);
	v->a[92638] = 1;
	v->a[92639] = sym_heredoc_body;
	small_parse_table_4632(v);
}

void	small_parse_table_4632(t_small_parse_table_array *v)
{
	v->a[92640] = state(1102);
	v->a[92641] = 2;
	v->a[92642] = sym__heredoc_body;
	v->a[92643] = sym__simple_heredoc_body;
	v->a[92644] = 6;
	v->a[92645] = actions(1404);
	v->a[92646] = 1;
	v->a[92647] = sym_comment;
	v->a[92648] = actions(4206);
	v->a[92649] = 1;
	v->a[92650] = sym_simple_heredoc_body;
	v->a[92651] = actions(4208);
	v->a[92652] = 1;
	v->a[92653] = sym__heredoc_body_beginning;
	v->a[92654] = state(1184);
	v->a[92655] = 1;
	v->a[92656] = sym__heredoc_body;
	v->a[92657] = state(1187);
	v->a[92658] = 1;
	v->a[92659] = sym__simple_heredoc_body;
	small_parse_table_4633(v);
}

void	small_parse_table_4633(t_small_parse_table_array *v)
{
	v->a[92660] = state(2151);
	v->a[92661] = 1;
	v->a[92662] = sym_heredoc_body;
	v->a[92663] = 5;
	v->a[92664] = actions(1404);
	v->a[92665] = 1;
	v->a[92666] = sym_comment;
	v->a[92667] = actions(4288);
	v->a[92668] = 1;
	v->a[92669] = anon_sym_DOLLAR_LBRACE;
	v->a[92670] = actions(4290);
	v->a[92671] = 1;
	v->a[92672] = anon_sym_DOLLAR_LPAREN;
	v->a[92673] = actions(4292);
	v->a[92674] = 1;
	v->a[92675] = anon_sym_BQUOTE;
	v->a[92676] = state(965);
	v->a[92677] = 2;
	v->a[92678] = sym_expansion;
	v->a[92679] = sym_command_substitution;
	small_parse_table_4634(v);
}

void	small_parse_table_4634(t_small_parse_table_array *v)
{
	v->a[92680] = 6;
	v->a[92681] = actions(1404);
	v->a[92682] = 1;
	v->a[92683] = sym_comment;
	v->a[92684] = actions(4208);
	v->a[92685] = 1;
	v->a[92686] = sym__heredoc_body_beginning;
	v->a[92687] = actions(4265);
	v->a[92688] = 1;
	v->a[92689] = sym_simple_heredoc_body;
	v->a[92690] = state(1243);
	v->a[92691] = 1;
	v->a[92692] = sym__simple_heredoc_body;
	v->a[92693] = state(1254);
	v->a[92694] = 1;
	v->a[92695] = sym__heredoc_body;
	v->a[92696] = state(2240);
	v->a[92697] = 1;
	v->a[92698] = sym_heredoc_body;
	v->a[92699] = 5;
	small_parse_table_4635(v);
}

/* EOF small_parse_table_926.c */
