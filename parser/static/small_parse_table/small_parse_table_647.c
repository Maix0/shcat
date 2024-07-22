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
	v->a[64700] = sym__bare_dollar;
	v->a[64701] = actions(2456);
	v->a[64702] = 5;
	v->a[64703] = aux_sym_concatenation_token1;
	v->a[64704] = sym_raw_string;
	v->a[64705] = sym_number;
	v->a[64706] = sym__comment_word;
	v->a[64707] = sym_word;
	v->a[64708] = state(1865);
	v->a[64709] = 5;
	v->a[64710] = sym_arithmetic_expansion;
	v->a[64711] = sym_string;
	v->a[64712] = sym_simple_expansion;
	v->a[64713] = sym_expansion;
	v->a[64714] = sym_command_substitution;
	v->a[64715] = 5;
	v->a[64716] = actions(3);
	v->a[64717] = 1;
	v->a[64718] = sym_comment;
	v->a[64719] = actions(2460);
	small_parse_table_3236(v);
}

void	small_parse_table_3236(t_small_parse_table_array *v)
{
	v->a[64720] = 1;
	v->a[64721] = sym_variable_name;
	v->a[64722] = actions(1955);
	v->a[64723] = 2;
	v->a[64724] = sym_file_descriptor;
	v->a[64725] = aux_sym_heredoc_redirect_token1;
	v->a[64726] = state(1249);
	v->a[64727] = 2;
	v->a[64728] = sym_variable_assignment;
	v->a[64729] = aux_sym__variable_assignments_repeat1;
	v->a[64730] = actions(1953);
	v->a[64731] = 12;
	v->a[64732] = anon_sym_PIPE;
	v->a[64733] = anon_sym_AMP_AMP;
	v->a[64734] = anon_sym_PIPE_PIPE;
	v->a[64735] = anon_sym_LT;
	v->a[64736] = anon_sym_GT;
	v->a[64737] = anon_sym_GT_GT;
	v->a[64738] = anon_sym_LT_AMP;
	v->a[64739] = anon_sym_GT_AMP;
	small_parse_table_3237(v);
}

void	small_parse_table_3237(t_small_parse_table_array *v)
{
	v->a[64740] = anon_sym_GT_PIPE;
	v->a[64741] = anon_sym_LT_GT;
	v->a[64742] = anon_sym_LT_LT;
	v->a[64743] = anon_sym_LT_LT_DASH;
	v->a[64744] = 12;
	v->a[64745] = actions(3);
	v->a[64746] = 1;
	v->a[64747] = sym_comment;
	v->a[64748] = actions(2466);
	v->a[64749] = 1;
	v->a[64750] = aux_sym_heredoc_redirect_token1;
	v->a[64751] = actions(2468);
	v->a[64752] = 1;
	v->a[64753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64754] = actions(2471);
	v->a[64755] = 1;
	v->a[64756] = anon_sym_DOLLAR;
	v->a[64757] = actions(2474);
	v->a[64758] = 1;
	v->a[64759] = anon_sym_DQUOTE;
	small_parse_table_3238(v);
}

void	small_parse_table_3238(t_small_parse_table_array *v)
{
	v->a[64760] = actions(2477);
	v->a[64761] = 1;
	v->a[64762] = anon_sym_DOLLAR_LBRACE;
	v->a[64763] = actions(2480);
	v->a[64764] = 1;
	v->a[64765] = anon_sym_DOLLAR_LPAREN;
	v->a[64766] = actions(2483);
	v->a[64767] = 1;
	v->a[64768] = anon_sym_BQUOTE;
	v->a[64769] = state(1250);
	v->a[64770] = 1;
	v->a[64771] = aux_sym__heredoc_command;
	v->a[64772] = state(1722);
	v->a[64773] = 1;
	v->a[64774] = sym_concatenation;
	v->a[64775] = actions(2463);
	v->a[64776] = 3;
	v->a[64777] = sym_raw_string;
	v->a[64778] = sym_number;
	v->a[64779] = sym_word;
	small_parse_table_3239(v);
}

void	small_parse_table_3239(t_small_parse_table_array *v)
{
	v->a[64780] = state(1516);
	v->a[64781] = 5;
	v->a[64782] = sym_arithmetic_expansion;
	v->a[64783] = sym_string;
	v->a[64784] = sym_simple_expansion;
	v->a[64785] = sym_expansion;
	v->a[64786] = sym_command_substitution;
	v->a[64787] = 3;
	v->a[64788] = actions(3);
	v->a[64789] = 1;
	v->a[64790] = sym_comment;
	v->a[64791] = actions(2191);
	v->a[64792] = 2;
	v->a[64793] = sym_file_descriptor;
	v->a[64794] = aux_sym_heredoc_redirect_token1;
	v->a[64795] = actions(2193);
	v->a[64796] = 15;
	v->a[64797] = anon_sym_esac;
	v->a[64798] = anon_sym_PIPE;
	v->a[64799] = anon_sym_SEMI_SEMI;
	small_parse_table_3240(v);
}

/* EOF small_parse_table_647.c */
