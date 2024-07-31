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
	v->a[64700] = anon_sym_AT;
	v->a[64701] = 3;
	v->a[64702] = actions(407);
	v->a[64703] = 1;
	v->a[64704] = sym_comment;
	v->a[64705] = actions(1762);
	v->a[64706] = 4;
	v->a[64707] = anon_sym_PIPE;
	v->a[64708] = anon_sym_LT;
	v->a[64709] = anon_sym_GT;
	v->a[64710] = anon_sym_LT_LT;
	v->a[64711] = actions(1760);
	v->a[64712] = 8;
	v->a[64713] = anon_sym_AMP_AMP;
	v->a[64714] = anon_sym_PIPE_PIPE;
	v->a[64715] = anon_sym_GT_GT;
	v->a[64716] = anon_sym_LT_AMP;
	v->a[64717] = anon_sym_GT_AMP;
	v->a[64718] = anon_sym_GT_PIPE;
	v->a[64719] = anon_sym_LT_GT;
	small_parse_table_3236(v);
}

void	small_parse_table_3236(t_small_parse_table_array *v)
{
	v->a[64720] = anon_sym_LT_LT_DASH;
	v->a[64721] = 10;
	v->a[64722] = actions(3);
	v->a[64723] = 1;
	v->a[64724] = sym_comment;
	v->a[64725] = actions(2548);
	v->a[64726] = 1;
	v->a[64727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64728] = actions(2554);
	v->a[64729] = 1;
	v->a[64730] = sym_string_content;
	v->a[64731] = actions(2556);
	v->a[64732] = 1;
	v->a[64733] = anon_sym_DOLLAR_LBRACE;
	v->a[64734] = actions(2558);
	v->a[64735] = 1;
	v->a[64736] = anon_sym_DOLLAR_LPAREN;
	v->a[64737] = actions(2560);
	v->a[64738] = 1;
	v->a[64739] = anon_sym_BQUOTE;
	small_parse_table_3237(v);
}

void	small_parse_table_3237(t_small_parse_table_array *v)
{
	v->a[64740] = actions(2867);
	v->a[64741] = 1;
	v->a[64742] = anon_sym_DOLLAR;
	v->a[64743] = actions(2869);
	v->a[64744] = 1;
	v->a[64745] = anon_sym_DQUOTE;
	v->a[64746] = state(1370);
	v->a[64747] = 1;
	v->a[64748] = aux_sym_string_repeat1;
	v->a[64749] = state(1477);
	v->a[64750] = 4;
	v->a[64751] = sym_arithmetic_expansion;
	v->a[64752] = sym_simple_expansion;
	v->a[64753] = sym_expansion;
	v->a[64754] = sym_command_substitution;
	v->a[64755] = 3;
	v->a[64756] = actions(3);
	v->a[64757] = 1;
	v->a[64758] = sym_comment;
	v->a[64759] = actions(2584);
	small_parse_table_3238(v);
}

void	small_parse_table_3238(t_small_parse_table_array *v)
{
	v->a[64760] = 1;
	v->a[64761] = sym_extglob_pattern;
	v->a[64762] = actions(2580);
	v->a[64763] = 10;
	v->a[64764] = anon_sym_LPAREN;
	v->a[64765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64766] = anon_sym_DOLLAR;
	v->a[64767] = anon_sym_DQUOTE;
	v->a[64768] = sym_raw_string;
	v->a[64769] = sym_number;
	v->a[64770] = anon_sym_DOLLAR_LBRACE;
	v->a[64771] = anon_sym_DOLLAR_LPAREN;
	v->a[64772] = anon_sym_BQUOTE;
	v->a[64773] = sym_word;
	v->a[64774] = 3;
	v->a[64775] = actions(3);
	v->a[64776] = 1;
	v->a[64777] = sym_comment;
	v->a[64778] = actions(2615);
	v->a[64779] = 1;
	small_parse_table_3239(v);
}

void	small_parse_table_3239(t_small_parse_table_array *v)
{
	v->a[64780] = sym_extglob_pattern;
	v->a[64781] = actions(2611);
	v->a[64782] = 10;
	v->a[64783] = anon_sym_LPAREN;
	v->a[64784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64785] = anon_sym_DOLLAR;
	v->a[64786] = anon_sym_DQUOTE;
	v->a[64787] = sym_raw_string;
	v->a[64788] = sym_number;
	v->a[64789] = anon_sym_DOLLAR_LBRACE;
	v->a[64790] = anon_sym_DOLLAR_LPAREN;
	v->a[64791] = anon_sym_BQUOTE;
	v->a[64792] = sym_word;
	v->a[64793] = 4;
	v->a[64794] = actions(3);
	v->a[64795] = 1;
	v->a[64796] = sym_comment;
	v->a[64797] = actions(351);
	v->a[64798] = 1;
	v->a[64799] = sym_variable_name;
	small_parse_table_3240(v);
}

/* EOF small_parse_table_647.c */
