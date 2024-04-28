/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2775.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13875(t_small_parse_table_array *v)
{
	v->a[277500] = state(5188);
	v->a[277501] = 1;
	v->a[277502] = aux_sym_concatenation_repeat1;
	v->a[277503] = actions(12481);
	v->a[277504] = 2;
	v->a[277505] = sym__concat;
	v->a[277506] = aux_sym_concatenation_token1;
	v->a[277507] = actions(1251);
	v->a[277508] = 7;
	v->a[277509] = anon_sym_PIPE;
	v->a[277510] = anon_sym_LT;
	v->a[277511] = anon_sym_GT;
	v->a[277512] = anon_sym_LT_LT;
	v->a[277513] = anon_sym_AMP_GT;
	v->a[277514] = anon_sym_LT_AMP;
	v->a[277515] = anon_sym_GT_AMP;
	v->a[277516] = actions(1253);
	v->a[277517] = 12;
	v->a[277518] = sym_file_descriptor;
	v->a[277519] = anon_sym_PIPE_PIPE;
	small_parse_table_13876(v);
}

void	small_parse_table_13876(t_small_parse_table_array *v)
{
	v->a[277520] = anon_sym_AMP_AMP;
	v->a[277521] = anon_sym_GT_GT;
	v->a[277522] = anon_sym_PIPE_AMP;
	v->a[277523] = anon_sym_RBRACK;
	v->a[277524] = anon_sym_AMP_GT_GT;
	v->a[277525] = anon_sym_GT_PIPE;
	v->a[277526] = anon_sym_LT_AMP_DASH;
	v->a[277527] = anon_sym_GT_AMP_DASH;
	v->a[277528] = anon_sym_LT_LT_DASH;
	v->a[277529] = anon_sym_LT_LT_LT;
	v->a[277530] = 9;
	v->a[277531] = actions(3);
	v->a[277532] = 1;
	v->a[277533] = sym_comment;
	v->a[277534] = actions(5383);
	v->a[277535] = 1;
	v->a[277536] = aux_sym_heredoc_redirect_token1;
	v->a[277537] = actions(12221);
	v->a[277538] = 1;
	v->a[277539] = sym_file_descriptor;
	small_parse_table_13877(v);
}

void	small_parse_table_13877(t_small_parse_table_array *v)
{
	v->a[277540] = actions(4692);
	v->a[277541] = 2;
	v->a[277542] = anon_sym_LT_LT;
	v->a[277543] = anon_sym_LT_LT_DASH;
	v->a[277544] = actions(5099);
	v->a[277545] = 2;
	v->a[277546] = anon_sym_PIPE_PIPE;
	v->a[277547] = anon_sym_AMP_AMP;
	v->a[277548] = actions(11556);
	v->a[277549] = 2;
	v->a[277550] = anon_sym_LT_AMP_DASH;
	v->a[277551] = anon_sym_GT_AMP_DASH;
	v->a[277552] = actions(5381);
	v->a[277553] = 3;
	v->a[277554] = anon_sym_SEMI;
	v->a[277555] = anon_sym_AMP;
	v->a[277556] = anon_sym_SEMI_SEMI;
	v->a[277557] = state(4986);
	v->a[277558] = 3;
	v->a[277559] = sym_file_redirect;
	small_parse_table_13878(v);
}

void	small_parse_table_13878(t_small_parse_table_array *v)
{
	v->a[277560] = sym_heredoc_redirect;
	v->a[277561] = aux_sym_redirected_statement_repeat1;
	v->a[277562] = actions(11554);
	v->a[277563] = 8;
	v->a[277564] = anon_sym_LT;
	v->a[277565] = anon_sym_GT;
	v->a[277566] = anon_sym_GT_GT;
	v->a[277567] = anon_sym_AMP_GT;
	v->a[277568] = anon_sym_AMP_GT_GT;
	v->a[277569] = anon_sym_LT_AMP;
	v->a[277570] = anon_sym_GT_AMP;
	v->a[277571] = anon_sym_GT_PIPE;
	v->a[277572] = 16;
	v->a[277573] = actions(71);
	v->a[277574] = 1;
	v->a[277575] = sym_comment;
	v->a[277576] = actions(12167);
	v->a[277577] = 1;
	v->a[277578] = anon_sym_LPAREN;
	v->a[277579] = actions(12171);
	small_parse_table_13879(v);
}

void	small_parse_table_13879(t_small_parse_table_array *v)
{
	v->a[277580] = 1;
	v->a[277581] = anon_sym_DOLLAR;
	v->a[277582] = actions(12173);
	v->a[277583] = 1;
	v->a[277584] = anon_sym_DQUOTE;
	v->a[277585] = actions(12175);
	v->a[277586] = 1;
	v->a[277587] = aux_sym_number_token1;
	v->a[277588] = actions(12177);
	v->a[277589] = 1;
	v->a[277590] = aux_sym_number_token2;
	v->a[277591] = actions(12179);
	v->a[277592] = 1;
	v->a[277593] = anon_sym_DOLLAR_LBRACE;
	v->a[277594] = actions(12181);
	v->a[277595] = 1;
	v->a[277596] = anon_sym_DOLLAR_LPAREN;
	v->a[277597] = actions(12183);
	v->a[277598] = 1;
	v->a[277599] = anon_sym_BQUOTE;
	small_parse_table_13880(v);
}

/* EOF small_parse_table_2775.c */
