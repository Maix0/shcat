/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_659.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3295(t_small_parse_table_array *v)
{
	v->a[65900] = anon_sym_BQUOTE;
	v->a[65901] = actions(1790);
	v->a[65902] = 1;
	v->a[65903] = sym_extglob_pattern;
	v->a[65904] = actions(1846);
	v->a[65905] = 1;
	v->a[65906] = anon_sym_esac;
	v->a[65907] = state(1237);
	v->a[65908] = 1;
	v->a[65909] = aux_sym_case_statement_repeat1;
	v->a[65910] = state(1920);
	v->a[65911] = 1;
	v->a[65912] = sym_case_item;
	v->a[65913] = state(2155);
	v->a[65914] = 1;
	v->a[65915] = sym__case_item_last;
	v->a[65916] = state(2096);
	v->a[65917] = 2;
	v->a[65918] = sym_concatenation;
	v->a[65919] = sym__extglob_blob;
	small_parse_table_3296(v);
}

void	small_parse_table_3296(t_small_parse_table_array *v)
{
	v->a[65920] = actions(1770);
	v->a[65921] = 3;
	v->a[65922] = sym_raw_string;
	v->a[65923] = sym_number;
	v->a[65924] = sym_word;
	v->a[65925] = state(2001);
	v->a[65926] = 5;
	v->a[65927] = sym_arithmetic_expansion;
	v->a[65928] = sym_string;
	v->a[65929] = sym_simple_expansion;
	v->a[65930] = sym_expansion;
	v->a[65931] = sym_command_substitution;
	v->a[65932] = 11;
	v->a[65933] = actions(3);
	v->a[65934] = 1;
	v->a[65935] = sym_comment;
	v->a[65936] = actions(813);
	v->a[65937] = 1;
	v->a[65938] = ts_builtin_sym_end;
	v->a[65939] = actions(2029);
	small_parse_table_3297(v);
}

void	small_parse_table_3297(t_small_parse_table_array *v)
{
	v->a[65940] = 1;
	v->a[65941] = aux_sym_heredoc_redirect_token1;
	v->a[65942] = actions(2031);
	v->a[65943] = 1;
	v->a[65944] = sym_file_descriptor;
	v->a[65945] = state(791);
	v->a[65946] = 1;
	v->a[65947] = sym_terminator;
	v->a[65948] = actions(754);
	v->a[65949] = 2;
	v->a[65950] = anon_sym_LT_LT;
	v->a[65951] = anon_sym_LT_LT_DASH;
	v->a[65952] = actions(783);
	v->a[65953] = 2;
	v->a[65954] = anon_sym_AMP_AMP;
	v->a[65955] = anon_sym_PIPE_PIPE;
	v->a[65956] = actions(2027);
	v->a[65957] = 2;
	v->a[65958] = anon_sym_LT_AMP_DASH;
	v->a[65959] = anon_sym_GT_AMP_DASH;
	small_parse_table_3298(v);
}

void	small_parse_table_3298(t_small_parse_table_array *v)
{
	v->a[65960] = actions(781);
	v->a[65961] = 3;
	v->a[65962] = anon_sym_SEMI_SEMI;
	v->a[65963] = anon_sym_AMP;
	v->a[65964] = anon_sym_SEMI;
	v->a[65965] = state(1160);
	v->a[65966] = 3;
	v->a[65967] = sym_file_redirect;
	v->a[65968] = sym_heredoc_redirect;
	v->a[65969] = aux_sym_redirected_statement_repeat1;
	v->a[65970] = actions(2025);
	v->a[65971] = 6;
	v->a[65972] = anon_sym_LT;
	v->a[65973] = anon_sym_GT;
	v->a[65974] = anon_sym_GT_GT;
	v->a[65975] = anon_sym_LT_AMP;
	v->a[65976] = anon_sym_GT_AMP;
	v->a[65977] = anon_sym_GT_PIPE;
	v->a[65978] = 11;
	v->a[65979] = actions(3);
	small_parse_table_3299(v);
}

void	small_parse_table_3299(t_small_parse_table_array *v)
{
	v->a[65980] = 1;
	v->a[65981] = sym_comment;
	v->a[65982] = actions(682);
	v->a[65983] = 1;
	v->a[65984] = anon_sym_PIPE;
	v->a[65985] = actions(2065);
	v->a[65986] = 1;
	v->a[65987] = sym_file_descriptor;
	v->a[65988] = actions(2189);
	v->a[65989] = 1;
	v->a[65990] = aux_sym_heredoc_redirect_token1;
	v->a[65991] = state(777);
	v->a[65992] = 1;
	v->a[65993] = sym_terminator;
	v->a[65994] = actions(754);
	v->a[65995] = 2;
	v->a[65996] = anon_sym_LT_LT;
	v->a[65997] = anon_sym_LT_LT_DASH;
	v->a[65998] = actions(924);
	v->a[65999] = 2;
	small_parse_table_3300(v);
}

/* EOF small_parse_table_659.c */
