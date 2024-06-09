/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_647.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3235(t_small_parse_table_array *v)
{
	v->a[64700] = actions(2328);
	v->a[64701] = 1;
	v->a[64702] = anon_sym_esac;
	v->a[64703] = state(1165);
	v->a[64704] = 1;
	v->a[64705] = aux_sym_case_statement_repeat1;
	v->a[64706] = state(1786);
	v->a[64707] = 1;
	v->a[64708] = sym_case_item;
	v->a[64709] = state(2133);
	v->a[64710] = 1;
	v->a[64711] = sym__case_item_last;
	v->a[64712] = actions(2111);
	v->a[64713] = 2;
	v->a[64714] = sym_raw_string;
	v->a[64715] = sym_word;
	v->a[64716] = state(2016);
	v->a[64717] = 2;
	v->a[64718] = sym_concatenation;
	v->a[64719] = sym__extglob_blob;
	small_parse_table_3236(v);
}

void	small_parse_table_3236(t_small_parse_table_array *v)
{
	v->a[64720] = state(1896);
	v->a[64721] = 6;
	v->a[64722] = sym_arithmetic_expansion;
	v->a[64723] = sym_string;
	v->a[64724] = sym_number;
	v->a[64725] = sym_simple_expansion;
	v->a[64726] = sym_expansion;
	v->a[64727] = sym_command_substitution;
	v->a[64728] = 3;
	v->a[64729] = actions(3);
	v->a[64730] = 1;
	v->a[64731] = sym_comment;
	v->a[64732] = actions(1112);
	v->a[64733] = 3;
	v->a[64734] = sym_file_descriptor;
	v->a[64735] = sym__concat;
	v->a[64736] = sym_variable_name;
	v->a[64737] = actions(1114);
	v->a[64738] = 21;
	v->a[64739] = anon_sym_LT;
	small_parse_table_3237(v);
}

void	small_parse_table_3237(t_small_parse_table_array *v)
{
	v->a[64740] = anon_sym_GT;
	v->a[64741] = anon_sym_GT_GT;
	v->a[64742] = anon_sym_AMP_GT;
	v->a[64743] = anon_sym_AMP_GT_GT;
	v->a[64744] = anon_sym_LT_AMP;
	v->a[64745] = anon_sym_GT_AMP;
	v->a[64746] = anon_sym_GT_PIPE;
	v->a[64747] = anon_sym_LT_AMP_DASH;
	v->a[64748] = anon_sym_GT_AMP_DASH;
	v->a[64749] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64750] = aux_sym_concatenation_token1;
	v->a[64751] = anon_sym_DOLLAR;
	v->a[64752] = anon_sym_DQUOTE;
	v->a[64753] = sym_raw_string;
	v->a[64754] = aux_sym_number_token1;
	v->a[64755] = aux_sym_number_token2;
	v->a[64756] = anon_sym_DOLLAR_LBRACE;
	v->a[64757] = anon_sym_DOLLAR_LPAREN;
	v->a[64758] = anon_sym_BQUOTE;
	v->a[64759] = sym_word;
	small_parse_table_3238(v);
}

void	small_parse_table_3238(t_small_parse_table_array *v)
{
	v->a[64760] = 5;
	v->a[64761] = actions(3);
	v->a[64762] = 1;
	v->a[64763] = sym_comment;
	v->a[64764] = actions(1002);
	v->a[64765] = 1;
	v->a[64766] = anon_sym_PIPE;
	v->a[64767] = actions(1071);
	v->a[64768] = 2;
	v->a[64769] = sym_file_descriptor;
	v->a[64770] = aux_sym_heredoc_redirect_token1;
	v->a[64771] = state(1050);
	v->a[64772] = 3;
	v->a[64773] = sym_file_redirect;
	v->a[64774] = sym_heredoc_redirect;
	v->a[64775] = aux_sym_redirected_statement_repeat1;
	v->a[64776] = actions(1004);
	v->a[64777] = 18;
	v->a[64778] = anon_sym_RPAREN;
	v->a[64779] = anon_sym_SEMI_SEMI;
	small_parse_table_3239(v);
}

void	small_parse_table_3239(t_small_parse_table_array *v)
{
	v->a[64780] = anon_sym_AMP_AMP;
	v->a[64781] = anon_sym_PIPE_PIPE;
	v->a[64782] = anon_sym_LT;
	v->a[64783] = anon_sym_GT;
	v->a[64784] = anon_sym_GT_GT;
	v->a[64785] = anon_sym_AMP_GT;
	v->a[64786] = anon_sym_AMP_GT_GT;
	v->a[64787] = anon_sym_LT_AMP;
	v->a[64788] = anon_sym_GT_AMP;
	v->a[64789] = anon_sym_GT_PIPE;
	v->a[64790] = anon_sym_LT_AMP_DASH;
	v->a[64791] = anon_sym_GT_AMP_DASH;
	v->a[64792] = anon_sym_LT_LT;
	v->a[64793] = anon_sym_LT_LT_DASH;
	v->a[64794] = anon_sym_AMP;
	v->a[64795] = anon_sym_SEMI;
	v->a[64796] = 4;
	v->a[64797] = actions(3);
	v->a[64798] = 1;
	v->a[64799] = sym_comment;
	small_parse_table_3240(v);
}

/* EOF small_parse_table_647.c */
