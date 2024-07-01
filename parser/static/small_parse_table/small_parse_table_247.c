/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_247.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1235(t_small_parse_table_array *v)
{
	v->a[24700] = 1;
	v->a[24701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24702] = actions(945);
	v->a[24703] = 1;
	v->a[24704] = anon_sym_DOLLAR;
	v->a[24705] = actions(947);
	v->a[24706] = 1;
	v->a[24707] = anon_sym_DQUOTE;
	v->a[24708] = actions(949);
	v->a[24709] = 1;
	v->a[24710] = anon_sym_DOLLAR_LBRACE;
	v->a[24711] = actions(951);
	v->a[24712] = 1;
	v->a[24713] = anon_sym_DOLLAR_LPAREN;
	v->a[24714] = actions(953);
	v->a[24715] = 1;
	v->a[24716] = anon_sym_BQUOTE;
	v->a[24717] = state(1394);
	v->a[24718] = 1;
	v->a[24719] = sym_concatenation;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = actions(941);
	v->a[24721] = 3;
	v->a[24722] = sym_raw_string;
	v->a[24723] = sym_number;
	v->a[24724] = sym_word;
	v->a[24725] = state(1178);
	v->a[24726] = 5;
	v->a[24727] = sym_arithmetic_expansion;
	v->a[24728] = sym_string;
	v->a[24729] = sym_simple_expansion;
	v->a[24730] = sym_expansion;
	v->a[24731] = sym_command_substitution;
	v->a[24732] = actions(711);
	v->a[24733] = 18;
	v->a[24734] = anon_sym_esac;
	v->a[24735] = anon_sym_PIPE;
	v->a[24736] = anon_sym_SEMI_SEMI;
	v->a[24737] = anon_sym_AMP_AMP;
	v->a[24738] = anon_sym_PIPE_PIPE;
	v->a[24739] = anon_sym_LT;
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = anon_sym_GT;
	v->a[24741] = anon_sym_GT_GT;
	v->a[24742] = anon_sym_LT_AMP;
	v->a[24743] = anon_sym_GT_AMP;
	v->a[24744] = anon_sym_GT_PIPE;
	v->a[24745] = anon_sym_LT_AMP_DASH;
	v->a[24746] = anon_sym_GT_AMP_DASH;
	v->a[24747] = anon_sym_LT_LT;
	v->a[24748] = anon_sym_LT_LT_DASH;
	v->a[24749] = aux_sym_heredoc_redirect_token1;
	v->a[24750] = anon_sym_AMP;
	v->a[24751] = anon_sym_SEMI;
	v->a[24752] = 12;
	v->a[24753] = actions(3);
	v->a[24754] = 1;
	v->a[24755] = sym_comment;
	v->a[24756] = actions(713);
	v->a[24757] = 1;
	v->a[24758] = sym_file_descriptor;
	v->a[24759] = actions(910);
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = 1;
	v->a[24761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24762] = actions(912);
	v->a[24763] = 1;
	v->a[24764] = anon_sym_DOLLAR;
	v->a[24765] = actions(914);
	v->a[24766] = 1;
	v->a[24767] = anon_sym_DQUOTE;
	v->a[24768] = actions(916);
	v->a[24769] = 1;
	v->a[24770] = anon_sym_DOLLAR_LBRACE;
	v->a[24771] = actions(918);
	v->a[24772] = 1;
	v->a[24773] = anon_sym_DOLLAR_LPAREN;
	v->a[24774] = actions(920);
	v->a[24775] = 1;
	v->a[24776] = anon_sym_BQUOTE;
	v->a[24777] = state(1259);
	v->a[24778] = 1;
	v->a[24779] = sym_concatenation;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = actions(955);
	v->a[24781] = 3;
	v->a[24782] = sym_raw_string;
	v->a[24783] = sym_number;
	v->a[24784] = sym_word;
	v->a[24785] = state(1099);
	v->a[24786] = 5;
	v->a[24787] = sym_arithmetic_expansion;
	v->a[24788] = sym_string;
	v->a[24789] = sym_simple_expansion;
	v->a[24790] = sym_expansion;
	v->a[24791] = sym_command_substitution;
	v->a[24792] = actions(711);
	v->a[24793] = 18;
	v->a[24794] = anon_sym_PIPE;
	v->a[24795] = anon_sym_RPAREN;
	v->a[24796] = anon_sym_SEMI_SEMI;
	v->a[24797] = anon_sym_AMP_AMP;
	v->a[24798] = anon_sym_PIPE_PIPE;
	v->a[24799] = anon_sym_LT;
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
