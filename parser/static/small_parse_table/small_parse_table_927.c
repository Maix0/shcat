/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_927.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4635(t_small_parse_table_array *v)
{
	v->a[92700] = actions(1404);
	v->a[92701] = 1;
	v->a[92702] = sym_comment;
	v->a[92703] = actions(4208);
	v->a[92704] = 1;
	v->a[92705] = sym__heredoc_body_beginning;
	v->a[92706] = actions(4265);
	v->a[92707] = 1;
	v->a[92708] = sym_simple_heredoc_body;
	v->a[92709] = state(2240);
	v->a[92710] = 1;
	v->a[92711] = sym_heredoc_body;
	v->a[92712] = state(1289);
	v->a[92713] = 2;
	v->a[92714] = sym__heredoc_body;
	v->a[92715] = sym__simple_heredoc_body;
	v->a[92716] = 5;
	v->a[92717] = actions(1404);
	v->a[92718] = 1;
	v->a[92719] = sym_comment;
	small_parse_table_4636(v);
}

void	small_parse_table_4636(t_small_parse_table_array *v)
{
	v->a[92720] = actions(4294);
	v->a[92721] = 1;
	v->a[92722] = anon_sym_DOLLAR_LBRACE;
	v->a[92723] = actions(4296);
	v->a[92724] = 1;
	v->a[92725] = anon_sym_DOLLAR_LPAREN;
	v->a[92726] = actions(4298);
	v->a[92727] = 1;
	v->a[92728] = anon_sym_BQUOTE;
	v->a[92729] = state(381);
	v->a[92730] = 2;
	v->a[92731] = sym_expansion;
	v->a[92732] = sym_command_substitution;
	v->a[92733] = 5;
	v->a[92734] = actions(1404);
	v->a[92735] = 1;
	v->a[92736] = sym_comment;
	v->a[92737] = actions(4300);
	v->a[92738] = 1;
	v->a[92739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4637(v);
}

void	small_parse_table_4637(t_small_parse_table_array *v)
{
	v->a[92740] = actions(4302);
	v->a[92741] = 1;
	v->a[92742] = anon_sym_DOLLAR_LPAREN;
	v->a[92743] = actions(4304);
	v->a[92744] = 1;
	v->a[92745] = anon_sym_BQUOTE;
	v->a[92746] = state(505);
	v->a[92747] = 2;
	v->a[92748] = sym_expansion;
	v->a[92749] = sym_command_substitution;
	v->a[92750] = 2;
	v->a[92751] = actions(1404);
	v->a[92752] = 1;
	v->a[92753] = sym_comment;
	v->a[92754] = actions(1301);
	v->a[92755] = 5;
	v->a[92756] = sym__concat;
	v->a[92757] = anon_sym_PIPE;
	v->a[92758] = anon_sym_RPAREN;
	v->a[92759] = anon_sym_RBRACE;
	small_parse_table_4638(v);
}

void	small_parse_table_4638(t_small_parse_table_array *v)
{
	v->a[92760] = aux_sym_concatenation_token1;
	v->a[92761] = 5;
	v->a[92762] = actions(1404);
	v->a[92763] = 1;
	v->a[92764] = sym_comment;
	v->a[92765] = actions(4306);
	v->a[92766] = 1;
	v->a[92767] = anon_sym_DOLLAR_LBRACE;
	v->a[92768] = actions(4308);
	v->a[92769] = 1;
	v->a[92770] = anon_sym_DOLLAR_LPAREN;
	v->a[92771] = actions(4310);
	v->a[92772] = 1;
	v->a[92773] = anon_sym_BQUOTE;
	v->a[92774] = state(1023);
	v->a[92775] = 2;
	v->a[92776] = sym_expansion;
	v->a[92777] = sym_command_substitution;
	v->a[92778] = 5;
	v->a[92779] = actions(1404);
	small_parse_table_4639(v);
}

void	small_parse_table_4639(t_small_parse_table_array *v)
{
	v->a[92780] = 1;
	v->a[92781] = sym_comment;
	v->a[92782] = actions(4312);
	v->a[92783] = 1;
	v->a[92784] = anon_sym_DOLLAR_LBRACE;
	v->a[92785] = actions(4314);
	v->a[92786] = 1;
	v->a[92787] = anon_sym_DOLLAR_LPAREN;
	v->a[92788] = actions(4316);
	v->a[92789] = 1;
	v->a[92790] = anon_sym_BQUOTE;
	v->a[92791] = state(1877);
	v->a[92792] = 2;
	v->a[92793] = sym_expansion;
	v->a[92794] = sym_command_substitution;
	v->a[92795] = 4;
	v->a[92796] = actions(3);
	v->a[92797] = 1;
	v->a[92798] = sym_comment;
	v->a[92799] = actions(4133);
	small_parse_table_4640(v);
}

/* EOF small_parse_table_927.c */
