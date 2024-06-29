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
	v->a[61700] = 1;
	v->a[61701] = aux_sym_heredoc_redirect_token1;
	v->a[61702] = actions(2033);
	v->a[61703] = 1;
	v->a[61704] = sym_file_descriptor;
	v->a[61705] = state(839);
	v->a[61706] = 1;
	v->a[61707] = sym_terminator;
	v->a[61708] = actions(804);
	v->a[61709] = 2;
	v->a[61710] = anon_sym_LT_LT;
	v->a[61711] = anon_sym_LT_LT_DASH;
	v->a[61712] = actions(842);
	v->a[61713] = 2;
	v->a[61714] = anon_sym_AMP_AMP;
	v->a[61715] = anon_sym_PIPE_PIPE;
	v->a[61716] = actions(2029);
	v->a[61717] = 2;
	v->a[61718] = anon_sym_LT_AMP_DASH;
	v->a[61719] = anon_sym_GT_AMP_DASH;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = actions(800);
	v->a[61721] = 3;
	v->a[61722] = anon_sym_SEMI_SEMI;
	v->a[61723] = anon_sym_AMP;
	v->a[61724] = anon_sym_SEMI;
	v->a[61725] = state(1157);
	v->a[61726] = 3;
	v->a[61727] = sym_file_redirect;
	v->a[61728] = sym_heredoc_redirect;
	v->a[61729] = aux_sym_redirected_statement_repeat1;
	v->a[61730] = actions(2027);
	v->a[61731] = 8;
	v->a[61732] = anon_sym_LT;
	v->a[61733] = anon_sym_GT;
	v->a[61734] = anon_sym_GT_GT;
	v->a[61735] = anon_sym_AMP_GT;
	v->a[61736] = anon_sym_AMP_GT_GT;
	v->a[61737] = anon_sym_LT_AMP;
	v->a[61738] = anon_sym_GT_AMP;
	v->a[61739] = anon_sym_GT_PIPE;
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = 12;
	v->a[61741] = actions(3);
	v->a[61742] = 1;
	v->a[61743] = sym_comment;
	v->a[61744] = actions(766);
	v->a[61745] = 1;
	v->a[61746] = anon_sym_PIPE;
	v->a[61747] = actions(2003);
	v->a[61748] = 1;
	v->a[61749] = aux_sym_heredoc_redirect_token1;
	v->a[61750] = actions(2005);
	v->a[61751] = 1;
	v->a[61752] = sym_file_descriptor;
	v->a[61753] = state(758);
	v->a[61754] = 1;
	v->a[61755] = sym_terminator;
	v->a[61756] = actions(764);
	v->a[61757] = 2;
	v->a[61758] = anon_sym_esac;
	v->a[61759] = anon_sym_SEMI_SEMI;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = actions(768);
	v->a[61761] = 2;
	v->a[61762] = anon_sym_AMP_AMP;
	v->a[61763] = anon_sym_PIPE_PIPE;
	v->a[61764] = actions(770);
	v->a[61765] = 2;
	v->a[61766] = anon_sym_LT_LT;
	v->a[61767] = anon_sym_LT_LT_DASH;
	v->a[61768] = actions(772);
	v->a[61769] = 2;
	v->a[61770] = anon_sym_AMP;
	v->a[61771] = anon_sym_SEMI;
	v->a[61772] = actions(2001);
	v->a[61773] = 2;
	v->a[61774] = anon_sym_LT_AMP_DASH;
	v->a[61775] = anon_sym_GT_AMP_DASH;
	v->a[61776] = state(1123);
	v->a[61777] = 3;
	v->a[61778] = sym_file_redirect;
	v->a[61779] = sym_heredoc_redirect;
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = aux_sym_redirected_statement_repeat1;
	v->a[61781] = actions(1999);
	v->a[61782] = 8;
	v->a[61783] = anon_sym_LT;
	v->a[61784] = anon_sym_GT;
	v->a[61785] = anon_sym_GT_GT;
	v->a[61786] = anon_sym_AMP_GT;
	v->a[61787] = anon_sym_AMP_GT_GT;
	v->a[61788] = anon_sym_LT_AMP;
	v->a[61789] = anon_sym_GT_AMP;
	v->a[61790] = anon_sym_GT_PIPE;
	v->a[61791] = 12;
	v->a[61792] = actions(3);
	v->a[61793] = 1;
	v->a[61794] = sym_comment;
	v->a[61795] = actions(764);
	v->a[61796] = 1;
	v->a[61797] = anon_sym_BQUOTE;
	v->a[61798] = actions(766);
	v->a[61799] = 1;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
