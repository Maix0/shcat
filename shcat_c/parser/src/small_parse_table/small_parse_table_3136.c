/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3136.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15680(t_small_parse_table_array *v)
{
	v->a[313600] = sym_heredoc_body;
	v->a[313601] = state(5571);
	v->a[313602] = 2;
	v->a[313603] = sym__heredoc_body;
	v->a[313604] = sym__simple_heredoc_body;
	v->a[313605] = 6;
	v->a[313606] = actions(29);
	v->a[313607] = 1;
	v->a[313608] = anon_sym_LBRACE;
	v->a[313609] = actions(71);
	v->a[313610] = 1;
	v->a[313611] = sym_comment;
	v->a[313612] = actions(14771);
	v->a[313613] = 1;
	v->a[313614] = anon_sym_SEMI;
	v->a[313615] = actions(14773);
	v->a[313616] = 1;
	v->a[313617] = anon_sym_do;
	v->a[313618] = state(5005);
	v->a[313619] = 1;
	small_parse_table_15681(v);
}

void	small_parse_table_15681(t_small_parse_table_array *v)
{
	v->a[313620] = sym_do_group;
	v->a[313621] = state(5009);
	v->a[313622] = 1;
	v->a[313623] = sym_compound_statement;
	v->a[313624] = 5;
	v->a[313625] = actions(71);
	v->a[313626] = 1;
	v->a[313627] = sym_comment;
	v->a[313628] = actions(14710);
	v->a[313629] = 1;
	v->a[313630] = sym__heredoc_body_beginning;
	v->a[313631] = actions(14724);
	v->a[313632] = 1;
	v->a[313633] = sym_simple_heredoc_body;
	v->a[313634] = state(7519);
	v->a[313635] = 1;
	v->a[313636] = sym_heredoc_body;
	v->a[313637] = state(4932);
	v->a[313638] = 2;
	v->a[313639] = sym__heredoc_body;
	small_parse_table_15682(v);
}

void	small_parse_table_15682(t_small_parse_table_array *v)
{
	v->a[313640] = sym__simple_heredoc_body;
	v->a[313641] = 4;
	v->a[313642] = actions(71);
	v->a[313643] = 1;
	v->a[313644] = sym_comment;
	v->a[313645] = state(6419);
	v->a[313646] = 1;
	v->a[313647] = aux_sym_concatenation_repeat1;
	v->a[313648] = actions(1253);
	v->a[313649] = 2;
	v->a[313650] = anon_sym_PIPE;
	v->a[313651] = anon_sym_RPAREN;
	v->a[313652] = actions(14775);
	v->a[313653] = 2;
	v->a[313654] = sym__concat;
	v->a[313655] = aux_sym_concatenation_token1;
	v->a[313656] = 4;
	v->a[313657] = actions(71);
	v->a[313658] = 1;
	v->a[313659] = sym_comment;
	small_parse_table_15683(v);
}

void	small_parse_table_15683(t_small_parse_table_array *v)
{
	v->a[313660] = state(6439);
	v->a[313661] = 1;
	v->a[313662] = aux_sym_concatenation_repeat1;
	v->a[313663] = actions(14568);
	v->a[313664] = 2;
	v->a[313665] = sym__concat;
	v->a[313666] = aux_sym_concatenation_token1;
	v->a[313667] = actions(14778);
	v->a[313668] = 2;
	v->a[313669] = anon_sym_PIPE;
	v->a[313670] = anon_sym_RPAREN;
	v->a[313671] = 6;
	v->a[313672] = actions(71);
	v->a[313673] = 1;
	v->a[313674] = sym_comment;
	v->a[313675] = actions(14710);
	v->a[313676] = 1;
	v->a[313677] = sym__heredoc_body_beginning;
	v->a[313678] = actions(14712);
	v->a[313679] = 1;
	small_parse_table_15684(v);
}

void	small_parse_table_15684(t_small_parse_table_array *v)
{
	v->a[313680] = sym_simple_heredoc_body;
	v->a[313681] = state(5635);
	v->a[313682] = 1;
	v->a[313683] = sym__simple_heredoc_body;
	v->a[313684] = state(5636);
	v->a[313685] = 1;
	v->a[313686] = sym__heredoc_body;
	v->a[313687] = state(7466);
	v->a[313688] = 1;
	v->a[313689] = sym_heredoc_body;
	v->a[313690] = 6;
	v->a[313691] = actions(71);
	v->a[313692] = 1;
	v->a[313693] = sym_comment;
	v->a[313694] = actions(14710);
	v->a[313695] = 1;
	v->a[313696] = sym__heredoc_body_beginning;
	v->a[313697] = actions(14722);
	v->a[313698] = 1;
	v->a[313699] = sym_simple_heredoc_body;
	small_parse_table_15685(v);
}

/* EOF small_parse_table_3136.c */
