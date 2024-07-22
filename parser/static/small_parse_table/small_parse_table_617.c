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
	v->a[61701] = sym_file_descriptor;
	v->a[61702] = state(1151);
	v->a[61703] = 2;
	v->a[61704] = sym_file_redirect;
	v->a[61705] = aux_sym_redirected_statement_repeat2;
	v->a[61706] = actions(2177);
	v->a[61707] = 7;
	v->a[61708] = anon_sym_LT;
	v->a[61709] = anon_sym_GT;
	v->a[61710] = anon_sym_GT_GT;
	v->a[61711] = anon_sym_LT_AMP;
	v->a[61712] = anon_sym_GT_AMP;
	v->a[61713] = anon_sym_GT_PIPE;
	v->a[61714] = anon_sym_LT_GT;
	v->a[61715] = actions(2159);
	v->a[61716] = 8;
	v->a[61717] = anon_sym_esac;
	v->a[61718] = anon_sym_PIPE;
	v->a[61719] = anon_sym_SEMI_SEMI;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = anon_sym_AMP_AMP;
	v->a[61721] = anon_sym_PIPE_PIPE;
	v->a[61722] = anon_sym_LT_LT;
	v->a[61723] = anon_sym_LT_LT_DASH;
	v->a[61724] = anon_sym_SEMI;
	v->a[61725] = 10;
	v->a[61726] = actions(3);
	v->a[61727] = 1;
	v->a[61728] = sym_comment;
	v->a[61729] = actions(784);
	v->a[61730] = 1;
	v->a[61731] = anon_sym_SEMI_SEMI;
	v->a[61732] = actions(786);
	v->a[61733] = 1;
	v->a[61734] = anon_sym_SEMI;
	v->a[61735] = actions(1888);
	v->a[61736] = 1;
	v->a[61737] = aux_sym_heredoc_redirect_token1;
	v->a[61738] = actions(1945);
	v->a[61739] = 1;
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = sym_file_descriptor;
	v->a[61741] = state(572);
	v->a[61742] = 1;
	v->a[61743] = sym_terminator;
	v->a[61744] = actions(790);
	v->a[61745] = 2;
	v->a[61746] = anon_sym_LT_LT;
	v->a[61747] = anon_sym_LT_LT_DASH;
	v->a[61748] = actions(1028);
	v->a[61749] = 2;
	v->a[61750] = anon_sym_AMP_AMP;
	v->a[61751] = anon_sym_PIPE_PIPE;
	v->a[61752] = state(1194);
	v->a[61753] = 3;
	v->a[61754] = sym_file_redirect;
	v->a[61755] = sym_heredoc_redirect;
	v->a[61756] = aux_sym_redirected_statement_repeat1;
	v->a[61757] = actions(1941);
	v->a[61758] = 7;
	v->a[61759] = anon_sym_LT;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = anon_sym_GT;
	v->a[61761] = anon_sym_GT_GT;
	v->a[61762] = anon_sym_LT_AMP;
	v->a[61763] = anon_sym_GT_AMP;
	v->a[61764] = anon_sym_GT_PIPE;
	v->a[61765] = anon_sym_LT_GT;
	v->a[61766] = 3;
	v->a[61767] = actions(3);
	v->a[61768] = 1;
	v->a[61769] = sym_comment;
	v->a[61770] = actions(2183);
	v->a[61771] = 3;
	v->a[61772] = sym_file_descriptor;
	v->a[61773] = ts_builtin_sym_end;
	v->a[61774] = aux_sym_heredoc_redirect_token1;
	v->a[61775] = actions(2185);
	v->a[61776] = 16;
	v->a[61777] = anon_sym_PIPE;
	v->a[61778] = anon_sym_RPAREN;
	v->a[61779] = anon_sym_SEMI_SEMI;
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = anon_sym_AMP_AMP;
	v->a[61781] = anon_sym_PIPE_PIPE;
	v->a[61782] = anon_sym_LT;
	v->a[61783] = anon_sym_GT;
	v->a[61784] = anon_sym_GT_GT;
	v->a[61785] = anon_sym_LT_AMP;
	v->a[61786] = anon_sym_GT_AMP;
	v->a[61787] = anon_sym_GT_PIPE;
	v->a[61788] = anon_sym_LT_GT;
	v->a[61789] = anon_sym_LT_LT;
	v->a[61790] = anon_sym_LT_LT_DASH;
	v->a[61791] = anon_sym_BQUOTE;
	v->a[61792] = anon_sym_SEMI;
	v->a[61793] = 3;
	v->a[61794] = actions(3);
	v->a[61795] = 1;
	v->a[61796] = sym_comment;
	v->a[61797] = actions(2187);
	v->a[61798] = 3;
	v->a[61799] = sym_file_descriptor;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
