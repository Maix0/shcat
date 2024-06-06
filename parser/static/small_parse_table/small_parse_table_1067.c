/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1067.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5335(t_small_parse_table_array *v)
{
	v->a[106700] = state(1566);
	v->a[106701] = 7;
	v->a[106702] = sym_arithmetic_expansion;
	v->a[106703] = sym_brace_expression;
	v->a[106704] = sym_string;
	v->a[106705] = sym_number;
	v->a[106706] = sym_simple_expansion;
	v->a[106707] = sym_expansion;
	v->a[106708] = sym_command_substitution;
	v->a[106709] = 3;
	v->a[106710] = actions(3);
	v->a[106711] = 1;
	v->a[106712] = sym_comment;
	v->a[106713] = actions(6155);
	v->a[106714] = 2;
	v->a[106715] = sym_file_descriptor;
	v->a[106716] = aux_sym_heredoc_redirect_token1;
	v->a[106717] = actions(6153);
	v->a[106718] = 22;
	v->a[106719] = anon_sym_esac;
	small_parse_table_5336(v);
}

void	small_parse_table_5336(t_small_parse_table_array *v)
{
	v->a[106720] = anon_sym_PIPE;
	v->a[106721] = anon_sym_SEMI_SEMI;
	v->a[106722] = anon_sym_SEMI_AMP;
	v->a[106723] = anon_sym_SEMI_SEMI_AMP;
	v->a[106724] = anon_sym_PIPE_AMP;
	v->a[106725] = anon_sym_AMP_AMP;
	v->a[106726] = anon_sym_PIPE_PIPE;
	v->a[106727] = anon_sym_LT;
	v->a[106728] = anon_sym_GT;
	v->a[106729] = anon_sym_GT_GT;
	v->a[106730] = anon_sym_AMP_GT;
	v->a[106731] = anon_sym_AMP_GT_GT;
	v->a[106732] = anon_sym_LT_AMP;
	v->a[106733] = anon_sym_GT_AMP;
	v->a[106734] = anon_sym_GT_PIPE;
	v->a[106735] = anon_sym_LT_AMP_DASH;
	v->a[106736] = anon_sym_GT_AMP_DASH;
	v->a[106737] = anon_sym_LT_LT;
	v->a[106738] = anon_sym_LT_LT_DASH;
	v->a[106739] = anon_sym_AMP;
	small_parse_table_5337(v);
}

void	small_parse_table_5337(t_small_parse_table_array *v)
{
	v->a[106740] = anon_sym_SEMI;
	v->a[106741] = 3;
	v->a[106742] = actions(3);
	v->a[106743] = 1;
	v->a[106744] = sym_comment;
	v->a[106745] = actions(6137);
	v->a[106746] = 3;
	v->a[106747] = sym_file_descriptor;
	v->a[106748] = ts_builtin_sym_end;
	v->a[106749] = aux_sym_heredoc_redirect_token1;
	v->a[106750] = actions(6139);
	v->a[106751] = 21;
	v->a[106752] = anon_sym_PIPE;
	v->a[106753] = anon_sym_RPAREN;
	v->a[106754] = anon_sym_SEMI_SEMI;
	v->a[106755] = anon_sym_PIPE_AMP;
	v->a[106756] = anon_sym_AMP_AMP;
	v->a[106757] = anon_sym_PIPE_PIPE;
	v->a[106758] = anon_sym_LT;
	v->a[106759] = anon_sym_GT;
	small_parse_table_5338(v);
}

void	small_parse_table_5338(t_small_parse_table_array *v)
{
	v->a[106760] = anon_sym_GT_GT;
	v->a[106761] = anon_sym_AMP_GT;
	v->a[106762] = anon_sym_AMP_GT_GT;
	v->a[106763] = anon_sym_LT_AMP;
	v->a[106764] = anon_sym_GT_AMP;
	v->a[106765] = anon_sym_GT_PIPE;
	v->a[106766] = anon_sym_LT_AMP_DASH;
	v->a[106767] = anon_sym_GT_AMP_DASH;
	v->a[106768] = anon_sym_LT_LT;
	v->a[106769] = anon_sym_LT_LT_DASH;
	v->a[106770] = anon_sym_AMP;
	v->a[106771] = anon_sym_BQUOTE;
	v->a[106772] = anon_sym_SEMI;
	v->a[106773] = 3;
	v->a[106774] = actions(3);
	v->a[106775] = 1;
	v->a[106776] = sym_comment;
	v->a[106777] = actions(1182);
	v->a[106778] = 2;
	v->a[106779] = sym_file_descriptor;
	small_parse_table_5339(v);
}

void	small_parse_table_5339(t_small_parse_table_array *v)
{
	v->a[106780] = aux_sym_heredoc_redirect_token1;
	v->a[106781] = actions(1180);
	v->a[106782] = 22;
	v->a[106783] = anon_sym_esac;
	v->a[106784] = anon_sym_PIPE;
	v->a[106785] = anon_sym_SEMI_SEMI;
	v->a[106786] = anon_sym_SEMI_AMP;
	v->a[106787] = anon_sym_SEMI_SEMI_AMP;
	v->a[106788] = anon_sym_PIPE_AMP;
	v->a[106789] = anon_sym_AMP_AMP;
	v->a[106790] = anon_sym_PIPE_PIPE;
	v->a[106791] = anon_sym_LT;
	v->a[106792] = anon_sym_GT;
	v->a[106793] = anon_sym_GT_GT;
	v->a[106794] = anon_sym_AMP_GT;
	v->a[106795] = anon_sym_AMP_GT_GT;
	v->a[106796] = anon_sym_LT_AMP;
	v->a[106797] = anon_sym_GT_AMP;
	v->a[106798] = anon_sym_GT_PIPE;
	v->a[106799] = anon_sym_LT_AMP_DASH;
	small_parse_table_5340(v);
}

/* EOF small_parse_table_1067.c */
