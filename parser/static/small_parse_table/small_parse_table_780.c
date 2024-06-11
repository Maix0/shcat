/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_780.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3900(t_small_parse_table_array *v)
{
	v->a[78000] = aux_sym_heredoc_redirect_token1;
	v->a[78001] = actions(2804);
	v->a[78002] = 1;
	v->a[78003] = anon_sym_AMP;
	v->a[78004] = actions(2806);
	v->a[78005] = 1;
	v->a[78006] = anon_sym_SEMI;
	v->a[78007] = actions(861);
	v->a[78008] = 2;
	v->a[78009] = anon_sym_LT_LT;
	v->a[78010] = anon_sym_LT_LT_DASH;
	v->a[78011] = actions(965);
	v->a[78012] = 2;
	v->a[78013] = anon_sym_AMP_AMP;
	v->a[78014] = anon_sym_PIPE_PIPE;
	v->a[78015] = actions(2598);
	v->a[78016] = 2;
	v->a[78017] = anon_sym_LT_AMP_DASH;
	v->a[78018] = anon_sym_GT_AMP_DASH;
	v->a[78019] = state(1322);
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = 3;
	v->a[78021] = sym_file_redirect;
	v->a[78022] = sym_heredoc_redirect;
	v->a[78023] = aux_sym_redirected_statement_repeat1;
	v->a[78024] = actions(2596);
	v->a[78025] = 8;
	v->a[78026] = anon_sym_LT;
	v->a[78027] = anon_sym_GT;
	v->a[78028] = anon_sym_GT_GT;
	v->a[78029] = anon_sym_AMP_GT;
	v->a[78030] = anon_sym_AMP_GT_GT;
	v->a[78031] = anon_sym_LT_AMP;
	v->a[78032] = anon_sym_GT_AMP;
	v->a[78033] = anon_sym_GT_PIPE;
	v->a[78034] = 16;
	v->a[78035] = actions(3);
	v->a[78036] = 1;
	v->a[78037] = sym_comment;
	v->a[78038] = actions(1959);
	v->a[78039] = 1;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = anon_sym_LPAREN;
	v->a[78041] = actions(1963);
	v->a[78042] = 1;
	v->a[78043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78044] = actions(1965);
	v->a[78045] = 1;
	v->a[78046] = anon_sym_DOLLAR;
	v->a[78047] = actions(1967);
	v->a[78048] = 1;
	v->a[78049] = anon_sym_DQUOTE;
	v->a[78050] = actions(1969);
	v->a[78051] = 1;
	v->a[78052] = anon_sym_DOLLAR_LBRACE;
	v->a[78053] = actions(1971);
	v->a[78054] = 1;
	v->a[78055] = anon_sym_DOLLAR_LPAREN;
	v->a[78056] = actions(1973);
	v->a[78057] = 1;
	v->a[78058] = anon_sym_BQUOTE;
	v->a[78059] = actions(1975);
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = 1;
	v->a[78061] = sym_extglob_pattern;
	v->a[78062] = actions(2031);
	v->a[78063] = 1;
	v->a[78064] = anon_sym_esac;
	v->a[78065] = state(1478);
	v->a[78066] = 1;
	v->a[78067] = aux_sym_case_statement_repeat1;
	v->a[78068] = state(2080);
	v->a[78069] = 1;
	v->a[78070] = sym_case_item;
	v->a[78071] = state(2314);
	v->a[78072] = 1;
	v->a[78073] = sym__case_item_last;
	v->a[78074] = state(2224);
	v->a[78075] = 2;
	v->a[78076] = sym_concatenation;
	v->a[78077] = sym__extglob_blob;
	v->a[78078] = actions(1955);
	v->a[78079] = 3;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = sym_raw_string;
	v->a[78081] = sym_number;
	v->a[78082] = sym_word;
	v->a[78083] = state(2157);
	v->a[78084] = 5;
	v->a[78085] = sym_arithmetic_expansion;
	v->a[78086] = sym_string;
	v->a[78087] = sym_simple_expansion;
	v->a[78088] = sym_expansion;
	v->a[78089] = sym_command_substitution;
	v->a[78090] = 5;
	v->a[78091] = actions(3);
	v->a[78092] = 1;
	v->a[78093] = sym_comment;
	v->a[78094] = actions(2895);
	v->a[78095] = 1;
	v->a[78096] = anon_sym_PIPE;
	v->a[78097] = state(1457);
	v->a[78098] = 1;
	v->a[78099] = aux_sym_pipeline_repeat1;
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
