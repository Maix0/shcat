/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = 3;
	v->a[70701] = actions(3);
	v->a[70702] = 1;
	v->a[70703] = sym_comment;
	v->a[70704] = actions(2372);
	v->a[70705] = 3;
	v->a[70706] = sym_file_descriptor;
	v->a[70707] = ts_builtin_sym_end;
	v->a[70708] = aux_sym_heredoc_redirect_token1;
	v->a[70709] = actions(2374);
	v->a[70710] = 20;
	v->a[70711] = anon_sym_PIPE;
	v->a[70712] = anon_sym_RPAREN;
	v->a[70713] = anon_sym_SEMI_SEMI;
	v->a[70714] = anon_sym_AMP_AMP;
	v->a[70715] = anon_sym_PIPE_PIPE;
	v->a[70716] = anon_sym_LT;
	v->a[70717] = anon_sym_GT;
	v->a[70718] = anon_sym_GT_GT;
	v->a[70719] = anon_sym_AMP_GT;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = anon_sym_AMP_GT_GT;
	v->a[70721] = anon_sym_LT_AMP;
	v->a[70722] = anon_sym_GT_AMP;
	v->a[70723] = anon_sym_GT_PIPE;
	v->a[70724] = anon_sym_LT_AMP_DASH;
	v->a[70725] = anon_sym_GT_AMP_DASH;
	v->a[70726] = anon_sym_LT_LT;
	v->a[70727] = anon_sym_LT_LT_DASH;
	v->a[70728] = anon_sym_AMP;
	v->a[70729] = anon_sym_BQUOTE;
	v->a[70730] = anon_sym_SEMI;
	v->a[70731] = 3;
	v->a[70732] = actions(3);
	v->a[70733] = 1;
	v->a[70734] = sym_comment;
	v->a[70735] = actions(2376);
	v->a[70736] = 3;
	v->a[70737] = sym_file_descriptor;
	v->a[70738] = ts_builtin_sym_end;
	v->a[70739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = actions(2378);
	v->a[70741] = 20;
	v->a[70742] = anon_sym_PIPE;
	v->a[70743] = anon_sym_RPAREN;
	v->a[70744] = anon_sym_SEMI_SEMI;
	v->a[70745] = anon_sym_AMP_AMP;
	v->a[70746] = anon_sym_PIPE_PIPE;
	v->a[70747] = anon_sym_LT;
	v->a[70748] = anon_sym_GT;
	v->a[70749] = anon_sym_GT_GT;
	v->a[70750] = anon_sym_AMP_GT;
	v->a[70751] = anon_sym_AMP_GT_GT;
	v->a[70752] = anon_sym_LT_AMP;
	v->a[70753] = anon_sym_GT_AMP;
	v->a[70754] = anon_sym_GT_PIPE;
	v->a[70755] = anon_sym_LT_AMP_DASH;
	v->a[70756] = anon_sym_GT_AMP_DASH;
	v->a[70757] = anon_sym_LT_LT;
	v->a[70758] = anon_sym_LT_LT_DASH;
	v->a[70759] = anon_sym_AMP;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_BQUOTE;
	v->a[70761] = anon_sym_SEMI;
	v->a[70762] = 8;
	v->a[70763] = actions(3);
	v->a[70764] = 1;
	v->a[70765] = sym_comment;
	v->a[70766] = actions(2066);
	v->a[70767] = 1;
	v->a[70768] = sym_file_descriptor;
	v->a[70769] = actions(2121);
	v->a[70770] = 1;
	v->a[70771] = aux_sym_heredoc_redirect_token1;
	v->a[70772] = actions(804);
	v->a[70773] = 2;
	v->a[70774] = anon_sym_LT_LT;
	v->a[70775] = anon_sym_LT_LT_DASH;
	v->a[70776] = actions(2064);
	v->a[70777] = 2;
	v->a[70778] = anon_sym_LT_AMP_DASH;
	v->a[70779] = anon_sym_GT_AMP_DASH;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = state(1269);
	v->a[70781] = 3;
	v->a[70782] = sym_file_redirect;
	v->a[70783] = sym_heredoc_redirect;
	v->a[70784] = aux_sym_redirected_statement_repeat1;
	v->a[70785] = actions(2119);
	v->a[70786] = 6;
	v->a[70787] = anon_sym_PIPE;
	v->a[70788] = anon_sym_SEMI_SEMI;
	v->a[70789] = anon_sym_AMP_AMP;
	v->a[70790] = anon_sym_PIPE_PIPE;
	v->a[70791] = anon_sym_AMP;
	v->a[70792] = anon_sym_SEMI;
	v->a[70793] = actions(2062);
	v->a[70794] = 8;
	v->a[70795] = anon_sym_LT;
	v->a[70796] = anon_sym_GT;
	v->a[70797] = anon_sym_GT_GT;
	v->a[70798] = anon_sym_AMP_GT;
	v->a[70799] = anon_sym_AMP_GT_GT;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
