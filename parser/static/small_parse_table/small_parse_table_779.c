/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_779.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3895(t_small_parse_table_array *v)
{
	v->a[77900] = 1;
	v->a[77901] = sym_comment;
	v->a[77902] = actions(1959);
	v->a[77903] = 1;
	v->a[77904] = anon_sym_LPAREN;
	v->a[77905] = actions(1963);
	v->a[77906] = 1;
	v->a[77907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77908] = actions(1965);
	v->a[77909] = 1;
	v->a[77910] = anon_sym_DOLLAR;
	v->a[77911] = actions(1967);
	v->a[77912] = 1;
	v->a[77913] = anon_sym_DQUOTE;
	v->a[77914] = actions(1969);
	v->a[77915] = 1;
	v->a[77916] = anon_sym_DOLLAR_LBRACE;
	v->a[77917] = actions(1971);
	v->a[77918] = 1;
	v->a[77919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = actions(1973);
	v->a[77921] = 1;
	v->a[77922] = anon_sym_BQUOTE;
	v->a[77923] = actions(1975);
	v->a[77924] = 1;
	v->a[77925] = sym_extglob_pattern;
	v->a[77926] = actions(2890);
	v->a[77927] = 1;
	v->a[77928] = anon_sym_esac;
	v->a[77929] = state(1480);
	v->a[77930] = 1;
	v->a[77931] = aux_sym_case_statement_repeat1;
	v->a[77932] = state(2080);
	v->a[77933] = 1;
	v->a[77934] = sym_case_item;
	v->a[77935] = state(2447);
	v->a[77936] = 1;
	v->a[77937] = sym__case_item_last;
	v->a[77938] = state(2224);
	v->a[77939] = 2;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = sym_concatenation;
	v->a[77941] = sym__extglob_blob;
	v->a[77942] = actions(1955);
	v->a[77943] = 3;
	v->a[77944] = sym_raw_string;
	v->a[77945] = sym_number;
	v->a[77946] = sym_word;
	v->a[77947] = state(2157);
	v->a[77948] = 5;
	v->a[77949] = sym_arithmetic_expansion;
	v->a[77950] = sym_string;
	v->a[77951] = sym_simple_expansion;
	v->a[77952] = sym_expansion;
	v->a[77953] = sym_command_substitution;
	v->a[77954] = 5;
	v->a[77955] = actions(3);
	v->a[77956] = 1;
	v->a[77957] = sym_comment;
	v->a[77958] = actions(2892);
	v->a[77959] = 1;
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = anon_sym_PIPE;
	v->a[77961] = state(1445);
	v->a[77962] = 1;
	v->a[77963] = aux_sym_pipeline_repeat1;
	v->a[77964] = actions(2316);
	v->a[77965] = 2;
	v->a[77966] = sym_file_descriptor;
	v->a[77967] = aux_sym_heredoc_redirect_token1;
	v->a[77968] = actions(2321);
	v->a[77969] = 18;
	v->a[77970] = anon_sym_SEMI_SEMI;
	v->a[77971] = anon_sym_AMP_AMP;
	v->a[77972] = anon_sym_PIPE_PIPE;
	v->a[77973] = anon_sym_LT;
	v->a[77974] = anon_sym_GT;
	v->a[77975] = anon_sym_GT_GT;
	v->a[77976] = anon_sym_AMP_GT;
	v->a[77977] = anon_sym_AMP_GT_GT;
	v->a[77978] = anon_sym_LT_AMP;
	v->a[77979] = anon_sym_GT_AMP;
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = anon_sym_GT_PIPE;
	v->a[77981] = anon_sym_LT_AMP_DASH;
	v->a[77982] = anon_sym_GT_AMP_DASH;
	v->a[77983] = anon_sym_LT_LT;
	v->a[77984] = anon_sym_LT_LT_DASH;
	v->a[77985] = anon_sym_AMP;
	v->a[77986] = anon_sym_BQUOTE;
	v->a[77987] = anon_sym_SEMI;
	v->a[77988] = 11;
	v->a[77989] = actions(3);
	v->a[77990] = 1;
	v->a[77991] = sym_comment;
	v->a[77992] = actions(840);
	v->a[77993] = 1;
	v->a[77994] = anon_sym_SEMI_SEMI;
	v->a[77995] = actions(2602);
	v->a[77996] = 1;
	v->a[77997] = sym_file_descriptor;
	v->a[77998] = actions(2802);
	v->a[77999] = 1;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
