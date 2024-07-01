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
	v->a[61700] = anon_sym_DOLLAR;
	v->a[61701] = anon_sym_DQUOTE;
	v->a[61702] = sym_raw_string;
	v->a[61703] = sym_number;
	v->a[61704] = anon_sym_DOLLAR_LBRACE;
	v->a[61705] = anon_sym_DOLLAR_LPAREN;
	v->a[61706] = anon_sym_BQUOTE;
	v->a[61707] = sym_word;
	v->a[61708] = 12;
	v->a[61709] = actions(3);
	v->a[61710] = 1;
	v->a[61711] = sym_comment;
	v->a[61712] = actions(682);
	v->a[61713] = 1;
	v->a[61714] = anon_sym_PIPE;
	v->a[61715] = actions(779);
	v->a[61716] = 1;
	v->a[61717] = ts_builtin_sym_end;
	v->a[61718] = actions(2029);
	v->a[61719] = 1;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = aux_sym_heredoc_redirect_token1;
	v->a[61721] = actions(2031);
	v->a[61722] = 1;
	v->a[61723] = sym_file_descriptor;
	v->a[61724] = state(796);
	v->a[61725] = 1;
	v->a[61726] = sym_terminator;
	v->a[61727] = actions(754);
	v->a[61728] = 2;
	v->a[61729] = anon_sym_LT_LT;
	v->a[61730] = anon_sym_LT_LT_DASH;
	v->a[61731] = actions(783);
	v->a[61732] = 2;
	v->a[61733] = anon_sym_AMP_AMP;
	v->a[61734] = anon_sym_PIPE_PIPE;
	v->a[61735] = actions(2027);
	v->a[61736] = 2;
	v->a[61737] = anon_sym_LT_AMP_DASH;
	v->a[61738] = anon_sym_GT_AMP_DASH;
	v->a[61739] = actions(781);
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = 3;
	v->a[61741] = anon_sym_SEMI_SEMI;
	v->a[61742] = anon_sym_AMP;
	v->a[61743] = anon_sym_SEMI;
	v->a[61744] = state(1160);
	v->a[61745] = 3;
	v->a[61746] = sym_file_redirect;
	v->a[61747] = sym_heredoc_redirect;
	v->a[61748] = aux_sym_redirected_statement_repeat1;
	v->a[61749] = actions(2025);
	v->a[61750] = 6;
	v->a[61751] = anon_sym_LT;
	v->a[61752] = anon_sym_GT;
	v->a[61753] = anon_sym_GT_GT;
	v->a[61754] = anon_sym_LT_AMP;
	v->a[61755] = anon_sym_GT_AMP;
	v->a[61756] = anon_sym_GT_PIPE;
	v->a[61757] = 12;
	v->a[61758] = actions(3);
	v->a[61759] = 1;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = sym_comment;
	v->a[61761] = actions(682);
	v->a[61762] = 1;
	v->a[61763] = anon_sym_PIPE;
	v->a[61764] = actions(779);
	v->a[61765] = 1;
	v->a[61766] = ts_builtin_sym_end;
	v->a[61767] = actions(2029);
	v->a[61768] = 1;
	v->a[61769] = aux_sym_heredoc_redirect_token1;
	v->a[61770] = actions(2031);
	v->a[61771] = 1;
	v->a[61772] = sym_file_descriptor;
	v->a[61773] = state(792);
	v->a[61774] = 1;
	v->a[61775] = sym_terminator;
	v->a[61776] = actions(754);
	v->a[61777] = 2;
	v->a[61778] = anon_sym_LT_LT;
	v->a[61779] = anon_sym_LT_LT_DASH;
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = actions(783);
	v->a[61781] = 2;
	v->a[61782] = anon_sym_AMP_AMP;
	v->a[61783] = anon_sym_PIPE_PIPE;
	v->a[61784] = actions(2027);
	v->a[61785] = 2;
	v->a[61786] = anon_sym_LT_AMP_DASH;
	v->a[61787] = anon_sym_GT_AMP_DASH;
	v->a[61788] = actions(781);
	v->a[61789] = 3;
	v->a[61790] = anon_sym_SEMI_SEMI;
	v->a[61791] = anon_sym_AMP;
	v->a[61792] = anon_sym_SEMI;
	v->a[61793] = state(1160);
	v->a[61794] = 3;
	v->a[61795] = sym_file_redirect;
	v->a[61796] = sym_heredoc_redirect;
	v->a[61797] = aux_sym_redirected_statement_repeat1;
	v->a[61798] = actions(2025);
	v->a[61799] = 6;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
