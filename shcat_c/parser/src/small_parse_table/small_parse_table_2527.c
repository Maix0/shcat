/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2527.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12635(t_small_parse_table_array *v)
{
	v->a[252700] = sym_file_descriptor;
	v->a[252701] = state(4912);
	v->a[252702] = 1;
	v->a[252703] = sym_herestring_redirect;
	v->a[252704] = actions(4253);
	v->a[252705] = 2;
	v->a[252706] = anon_sym_PIPE;
	v->a[252707] = anon_sym_PIPE_AMP;
	v->a[252708] = actions(4692);
	v->a[252709] = 2;
	v->a[252710] = anon_sym_LT_LT;
	v->a[252711] = anon_sym_LT_LT_DASH;
	v->a[252712] = actions(5099);
	v->a[252713] = 2;
	v->a[252714] = anon_sym_PIPE_PIPE;
	v->a[252715] = anon_sym_AMP_AMP;
	v->a[252716] = actions(11556);
	v->a[252717] = 2;
	v->a[252718] = anon_sym_LT_AMP_DASH;
	v->a[252719] = anon_sym_GT_AMP_DASH;
	small_parse_table_12636(v);
}

void	small_parse_table_12636(t_small_parse_table_array *v)
{
	v->a[252720] = actions(5381);
	v->a[252721] = 3;
	v->a[252722] = anon_sym_SEMI;
	v->a[252723] = anon_sym_AMP;
	v->a[252724] = anon_sym_SEMI_SEMI;
	v->a[252725] = state(4986);
	v->a[252726] = 3;
	v->a[252727] = sym_file_redirect;
	v->a[252728] = sym_heredoc_redirect;
	v->a[252729] = aux_sym_redirected_statement_repeat1;
	v->a[252730] = actions(11554);
	v->a[252731] = 8;
	v->a[252732] = anon_sym_LT;
	v->a[252733] = anon_sym_GT;
	v->a[252734] = anon_sym_GT_GT;
	v->a[252735] = anon_sym_AMP_GT;
	v->a[252736] = anon_sym_AMP_GT_GT;
	v->a[252737] = anon_sym_LT_AMP;
	v->a[252738] = anon_sym_GT_AMP;
	v->a[252739] = anon_sym_GT_PIPE;
	small_parse_table_12637(v);
}

void	small_parse_table_12637(t_small_parse_table_array *v)
{
	v->a[252740] = 3;
	v->a[252741] = actions(3);
	v->a[252742] = 1;
	v->a[252743] = sym_comment;
	v->a[252744] = actions(1310);
	v->a[252745] = 3;
	v->a[252746] = sym_file_descriptor;
	v->a[252747] = sym__concat;
	v->a[252748] = aux_sym_heredoc_redirect_token1;
	v->a[252749] = actions(1308);
	v->a[252750] = 23;
	v->a[252751] = anon_sym_SEMI;
	v->a[252752] = anon_sym_PIPE_PIPE;
	v->a[252753] = anon_sym_AMP_AMP;
	v->a[252754] = anon_sym_PIPE;
	v->a[252755] = anon_sym_AMP;
	v->a[252756] = anon_sym_LT;
	v->a[252757] = anon_sym_GT;
	v->a[252758] = anon_sym_LT_LT;
	v->a[252759] = anon_sym_GT_GT;
	small_parse_table_12638(v);
}

void	small_parse_table_12638(t_small_parse_table_array *v)
{
	v->a[252760] = anon_sym_esac;
	v->a[252761] = anon_sym_SEMI_SEMI;
	v->a[252762] = anon_sym_SEMI_AMP;
	v->a[252763] = anon_sym_SEMI_SEMI_AMP;
	v->a[252764] = anon_sym_PIPE_AMP;
	v->a[252765] = anon_sym_AMP_GT;
	v->a[252766] = anon_sym_AMP_GT_GT;
	v->a[252767] = anon_sym_LT_AMP;
	v->a[252768] = anon_sym_GT_AMP;
	v->a[252769] = anon_sym_GT_PIPE;
	v->a[252770] = anon_sym_LT_AMP_DASH;
	v->a[252771] = anon_sym_GT_AMP_DASH;
	v->a[252772] = anon_sym_LT_LT_DASH;
	v->a[252773] = aux_sym_concatenation_token1;
	v->a[252774] = 3;
	v->a[252775] = actions(3);
	v->a[252776] = 1;
	v->a[252777] = sym_comment;
	v->a[252778] = actions(1306);
	v->a[252779] = 3;
	small_parse_table_12639(v);
}

void	small_parse_table_12639(t_small_parse_table_array *v)
{
	v->a[252780] = sym_file_descriptor;
	v->a[252781] = sym__concat;
	v->a[252782] = aux_sym_heredoc_redirect_token1;
	v->a[252783] = actions(1304);
	v->a[252784] = 23;
	v->a[252785] = anon_sym_SEMI;
	v->a[252786] = anon_sym_PIPE_PIPE;
	v->a[252787] = anon_sym_AMP_AMP;
	v->a[252788] = anon_sym_PIPE;
	v->a[252789] = anon_sym_AMP;
	v->a[252790] = anon_sym_LT;
	v->a[252791] = anon_sym_GT;
	v->a[252792] = anon_sym_LT_LT;
	v->a[252793] = anon_sym_GT_GT;
	v->a[252794] = anon_sym_esac;
	v->a[252795] = anon_sym_SEMI_SEMI;
	v->a[252796] = anon_sym_SEMI_AMP;
	v->a[252797] = anon_sym_SEMI_SEMI_AMP;
	v->a[252798] = anon_sym_PIPE_AMP;
	v->a[252799] = anon_sym_AMP_GT;
	small_parse_table_12640(v);
}

/* EOF small_parse_table_2527.c */
