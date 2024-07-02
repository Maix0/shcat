/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_617.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3085(t_small_parse_table_array *v)
{
	v->a[61700] = 3;
	v->a[61701] = sym_file_descriptor;
	v->a[61702] = sym__concat;
	v->a[61703] = sym_variable_name;
	v->a[61704] = actions(1180);
	v->a[61705] = 17;
	v->a[61706] = anon_sym_LT;
	v->a[61707] = anon_sym_GT;
	v->a[61708] = anon_sym_GT_GT;
	v->a[61709] = anon_sym_LT_AMP;
	v->a[61710] = anon_sym_GT_AMP;
	v->a[61711] = anon_sym_GT_PIPE;
	v->a[61712] = anon_sym_LT_GT;
	v->a[61713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61714] = aux_sym_concatenation_token1;
	v->a[61715] = anon_sym_DOLLAR;
	v->a[61716] = anon_sym_DQUOTE;
	v->a[61717] = sym_raw_string;
	v->a[61718] = sym_number;
	v->a[61719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = anon_sym_DOLLAR_LPAREN;
	v->a[61721] = anon_sym_BQUOTE;
	v->a[61722] = sym_word;
	v->a[61723] = 5;
	v->a[61724] = actions(3);
	v->a[61725] = 1;
	v->a[61726] = sym_comment;
	v->a[61727] = actions(702);
	v->a[61728] = 1;
	v->a[61729] = sym_file_descriptor;
	v->a[61730] = actions(704);
	v->a[61731] = 1;
	v->a[61732] = sym_variable_name;
	v->a[61733] = state(1078);
	v->a[61734] = 2;
	v->a[61735] = sym_variable_assignment;
	v->a[61736] = aux_sym__variable_assignments_repeat1;
	v->a[61737] = actions(690);
	v->a[61738] = 16;
	v->a[61739] = anon_sym_LT;
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = anon_sym_GT;
	v->a[61741] = anon_sym_GT_GT;
	v->a[61742] = anon_sym_LT_AMP;
	v->a[61743] = anon_sym_GT_AMP;
	v->a[61744] = anon_sym_GT_PIPE;
	v->a[61745] = anon_sym_LT_GT;
	v->a[61746] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61747] = anon_sym_DOLLAR;
	v->a[61748] = anon_sym_DQUOTE;
	v->a[61749] = sym_raw_string;
	v->a[61750] = sym_number;
	v->a[61751] = anon_sym_DOLLAR_LBRACE;
	v->a[61752] = anon_sym_DOLLAR_LPAREN;
	v->a[61753] = anon_sym_BQUOTE;
	v->a[61754] = sym_word;
	v->a[61755] = 10;
	v->a[61756] = actions(3);
	v->a[61757] = 1;
	v->a[61758] = sym_comment;
	v->a[61759] = actions(724);
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = 1;
	v->a[61761] = anon_sym_SEMI_SEMI;
	v->a[61762] = actions(1857);
	v->a[61763] = 1;
	v->a[61764] = aux_sym_heredoc_redirect_token1;
	v->a[61765] = actions(1946);
	v->a[61766] = 1;
	v->a[61767] = sym_file_descriptor;
	v->a[61768] = state(688);
	v->a[61769] = 1;
	v->a[61770] = sym_terminator;
	v->a[61771] = actions(696);
	v->a[61772] = 2;
	v->a[61773] = anon_sym_AMP;
	v->a[61774] = anon_sym_SEMI;
	v->a[61775] = actions(700);
	v->a[61776] = 2;
	v->a[61777] = anon_sym_LT_LT;
	v->a[61778] = anon_sym_LT_LT_DASH;
	v->a[61779] = actions(914);
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = 2;
	v->a[61781] = anon_sym_AMP_AMP;
	v->a[61782] = anon_sym_PIPE_PIPE;
	v->a[61783] = state(1134);
	v->a[61784] = 3;
	v->a[61785] = sym_file_redirect;
	v->a[61786] = sym_heredoc_redirect;
	v->a[61787] = aux_sym_redirected_statement_repeat1;
	v->a[61788] = actions(1942);
	v->a[61789] = 7;
	v->a[61790] = anon_sym_LT;
	v->a[61791] = anon_sym_GT;
	v->a[61792] = anon_sym_GT_GT;
	v->a[61793] = anon_sym_LT_AMP;
	v->a[61794] = anon_sym_GT_AMP;
	v->a[61795] = anon_sym_GT_PIPE;
	v->a[61796] = anon_sym_LT_GT;
	v->a[61797] = 7;
	v->a[61798] = actions(3);
	v->a[61799] = 1;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
